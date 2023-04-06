#include "main.h"

void print_binary(unsigned long int y)
{
if (y > 1)
print_binary(y >> 1);

_putchar((y & 1) + '0');
}
