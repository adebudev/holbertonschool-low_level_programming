#include "holberton.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
*Return: void.
*/

void more_numbers(void)
{
int i;
int a;

for (i = 0; i <= 9; i++)
{

for (a = 0; a <=14; a++)
{
if (a > 9){
_putchar(a / 10 + '0');
}
_putchar(a % 10 + '0');
}
_putchar('\n');
}
}
