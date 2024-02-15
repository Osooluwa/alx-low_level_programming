#ifndef MAIN_H
#define MAIN_H

/*
 * File: holberton.h
 * Auth: Osoouwa Ajibola
 * Description: Header file containing all prototypes
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
