#ifndef main_h
#define main_h

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *Str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
