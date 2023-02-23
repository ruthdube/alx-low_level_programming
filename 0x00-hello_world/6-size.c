#include <stdio.h>


/**
 * main - Prints sizes of various data types
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{

printf("char size: %zu byte(s)\n", sizeof(char));
printf("int size: %zu byte(s)\n", sizeof(int));
pringf("long int size: %zu byte(s)\n", sizeof(long int));
printf("long long int size: %zu byte(s)\n", sizeof(long long int));
printf("float size: %zu byte(s)\n", sizeof(float));

return (0);
}
