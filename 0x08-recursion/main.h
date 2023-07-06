#ifndef main_h
#define main_h

#include <stdio.h>

int _putchar(int c);
int print_alphabet(void);
int print_alphabet_x10(void);
int _islower(int c);
int _isalpha();
int print_sign();
int _abs(int a);
int print_last_digit(void);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);
int positive_or_negative(int n);
int largest_number(int a, int b, int c);
void print_remaining_days(int a, int b, int c);
int convert_day(int month, int day);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int c);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
void _puts_recursion(char *s);
int _sqrt_recursion_funct(int n, int sta, int end);
int is_prime_helper(int n, int i);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
#endif
