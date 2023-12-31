#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/**********************************************/
int _putchar(char c);

unsigned int binary_to_uint(const char *b);
/* converts binary to unsigned int*/

void print_binary(unsigned long int n);
/* prints binary representation of a number */

int get_bit(unsigned long int n, unsigned int index);
/* returns bit at a given index */

int set_bit(unsigned long int *n, unsigned int index);

int clear_bit(unsigned long int *n, unsigned int index);

unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif /* MAIN_H */
