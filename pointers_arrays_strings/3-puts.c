#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')  // string bitənə qədər
    {
        _putchar(str[i]);  // hər simvolu çap et
        i++;
    }

    _putchar('\n');  // sonda yeni sətr
}
