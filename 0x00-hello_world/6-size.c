#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/*
 *Size of char: 1 byte(s)
 *Size of an int: 4 byte(s)
 *Size of a long int: 8 byte(s)
 *Size of a long long int: 8 byte(s)
 *Size of a float: 4 byte(s)
*/ 
printf("char size = %zu", sizeof(char));
printf("\nint size = %zu", sizeof(int));
pringf("\nlong int size = %zu", sizeof(long int));
printf("\nlong long int size =%zu", sizeof(long long int));
printf("\nfloat size = %zu", sizeof(float));

return (0);
}
