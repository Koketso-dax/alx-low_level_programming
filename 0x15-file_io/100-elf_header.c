#include "main.h"
/**
 * error_msg - will print error to console
 * @msg: error msg.
 */
void error_msg(char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
/**
 * main - validates ELF header and displays info
 * @argc: cmd args count
 * @argv: cmd args vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, x;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		error_msg("Usage: elf_header elf_filename");
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error_msg("Failed to open the ELF file");
	}
	if (read(fd, &header, sizeof(ELF64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		error_msg("Failed to read ELF header");
	}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		error_msg("Not a valid ELF file");
	}
	printf("Magic: ");
	for (x = 0; x < SELFMAG; x++)
	{
		printf("%02x ", header.e_ident[x]);
	}
	printf("\n");
	printf("Class:   %d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("Data:    %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? 
			"2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:    %d\n", header.e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header.e_entry);
	close(fd);
	return 0;
}
