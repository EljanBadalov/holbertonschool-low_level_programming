#include <stdio.h>

/**
 * main - Prints the entire lowercase English alphabet,
 * each letter followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		printf("%c\n", letter);
	}

	return (0);
}
