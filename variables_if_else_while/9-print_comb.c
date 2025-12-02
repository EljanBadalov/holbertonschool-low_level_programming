#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 (0-9),
 * separated by a comma and a space, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
