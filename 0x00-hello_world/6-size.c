#include <stdio.h>

/**
 * main - This is the main function
 * Return: zero if error and non zero if no error
 */

int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
   	printf("Size of int: %lu byte(s)\n", sizeof(int));
   	printf("Size of float: %lu byte(s)\n", sizeof(float));
    	printf("Size of double: %lu byte(s)\n", sizeof(double));
    	printf("Size of long: %lu byte(s)\n", sizeof(long));
    	printf("Size of long long: %lu byte(s)\n", sizeof(long long));
    	printf("Size of short: %lu byte(s)\n", sizeof(short));
	return (0);
}
