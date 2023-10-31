#include "main.h"
/**
 * print_elf - will print elf header after verification
 * @filename: input file.
 */

void print_elf(char *filename)
{
	int x, fd = open(filename, O_RDONLY);
	Elf64_Ehdr header;

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(98);
	}
	if (read(fd, &header, sizeof(header)) == -1)
	{
		dprintf(STDERR_FILENO, "Can't read file %s\n", filename);
		exit(98);
	}
	if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: File is not in ELF format\n");
		exit(98);
	}
	printf("ELF Header:\n");
	printf("Magic: ");
	for (x = 0; x < EI_NIDENT; x++)
	{
		printf(" %02x", header.e_ident[x]);
	}
	printf("\n");
	printf(" Class:			");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASS32: printf("ELF32\n"); break;
		case ELFCLASS64: printf("ELF64\n"); break;
		default: printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
	}
	printf(" Data:			");
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
		case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
		default: printf("<unknown: %x>\n", header.e_ident[EI_DATA]);
	}
	printf(" Version:			%i\n", header.e_ident[EI_VERSION]);
	printf(" OS/ABI:			");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
		case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
		case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
		case ELFOSABI_ARM: printf("ARM\n"); break;
		case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
		default: printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
	}
	printf(" ABI Version:			%i\n", header.e_ident[EI_ABIVERSION]);
	printf(" Type:			");
	switch (header.e_type)
	{
		case ET_NONE: printf("NONE (Unknown type)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown: %x>\n", header.e_type);
	}
	printf("Entry point address: %#x\n", (unsigned int)header.e_entry);
	close(fd);
}
/**
 * main - will check and print elf file
 * @argc: cmd args count
 * @argv: cmd args vector
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: ./elf_header elf_file\n");
		exit(98);
	}
	print_elf(argv[1]);
	return (0);
}
