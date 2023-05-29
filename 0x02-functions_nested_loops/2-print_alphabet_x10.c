#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	char c;
	int lowerCase;

	for (lowerCase = 0; lowerCase < 10; lowerCase++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
