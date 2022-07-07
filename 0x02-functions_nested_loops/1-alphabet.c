#include "main.h"

/**
 * main - print alphabets
 *
 * Return: 0
 */
void print_alphabets(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
