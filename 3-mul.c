#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int firstNumber;
	int secondNumber;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	firstNumber = atoi(argv[1]);
	secondNumber = atoi(argv[2]);
	result = firstNumber * secondNumber;

	printf("%d\n", result);

	return (0);
}
