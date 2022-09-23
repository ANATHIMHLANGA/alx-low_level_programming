#ifndef MAIN_H
#define MAIN_H
/**
 * main - header file for protoypes
 * void protoypes (void)
 * int protoypes (int)
 */

int _putchar(char c);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_strncat(char *dest, char *src, int n);
void reverse_array(int *a, int n);
char *_strcat(char *dest, char *src);
char *string_toupper(char *);
char *cap_string(char *);
void print_buffer(char *b, int size);
void print_number(int n);

#endif /* MAIN_H */
