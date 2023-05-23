#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowCase;
    char e = 'e';
	char q = 'q';

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
	{
		if (lowCase != e && lowCase != q)
			putchar(lowCase);
	}
	putchar('\n');

	return (0);
}
