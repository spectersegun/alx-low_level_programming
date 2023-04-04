#include "main.h"
#include <stdio.h>

/**
* _strstr - locates a substring
* @haystack: string to search
* @needle: substring to locate
*
* Return: if the substring is located - a pointer to the beginning
*					of the located substring.
*	If the string is not located - NULL.
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
