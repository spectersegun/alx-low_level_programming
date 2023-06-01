#include "main.h"

/**
 * rot13 - encodes a string in ROT13 cipher
 * @s: string to be encoded
 *
 * Return: the resulting encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j]; // Replace the character with the corresponding ROT13 character
				break; // Exit the inner loop after replacement
			}
		}
	}

	return s;
}
