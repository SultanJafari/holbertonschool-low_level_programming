#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* Prototype for _putchar if needed */
int _putchar(char c);

/* Task 0: Print name */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
