#include "main.h"

/**
 * string_nconcat - Concatenates two strings, up to n characters from s2
 *
 * @s1: First string

 * @n: Maximum number of characters to concatenate from s2
 *
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, i, j;
    char *result;

    if (s1 != NULL)
    {
        while (s1[len1])
            len1++;
    }

    if (s2 != NULL)
    {
        while (s2[len2])
            len2++;
    }

    if (n >= len2)
        n = len2;

    result = malloc(sizeof(char) * (len1 + n + 1));

    if (result == NULL)
        return NULL;

    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    for (j = 0; j < n; j++)
        result[len1 + j] = s2[j];

    result[len1 + n] = '\0';

    return result;
}
