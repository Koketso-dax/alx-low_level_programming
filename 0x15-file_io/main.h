#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdint.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

void print_elf(char *filename);

#endif
