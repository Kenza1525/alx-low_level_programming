#include "main.h"


/**
* print_number - prints an integer
* @n: integer parameter
* Return: Always 0
*/

void print_number(int n)

{
unsigned int k = 0;
if  (k < 0)
{
k = -n;
_putchar('-');
}

else
{
k = n;
}

if (k / 10)
{
print_number(k / 10);
}

_putchar((k % 10) + '0');
}
