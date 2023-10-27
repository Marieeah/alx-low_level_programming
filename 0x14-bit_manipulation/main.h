#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int number);
int get_bit(unsigned long int number, unsigned int index);
int set_bit(unsigned long int *num_ptr, unsigned int index);
int clear_bit(unsigned long int *num_ptr, unsigned int index);
unsigned int flip_bits(unsigned long int inital, unsigned long int target);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif
