#include "main.h"

int main(void)
{
    int row, col;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            int number = row * col;

            _putchar(number + '0');

            if (col < 9)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }

    return (0);
}

