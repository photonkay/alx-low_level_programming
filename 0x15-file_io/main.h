#ifndef MAIN_H
#define MAIN_H

/* header files */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/* function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *textcontent);






#endif /* MAIN_H */
