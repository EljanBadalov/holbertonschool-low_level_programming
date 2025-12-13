#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* dest-in sonunu tap */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* src-ni dest-in sonuna kopyala */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* yeni string-i bitir */
	dest[i] = '\0';

	return (dest);
}
