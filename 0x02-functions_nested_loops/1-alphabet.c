#include <stdio.h>

/**
 * main - prints all alphabets in lower case, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar("%c", ch);
		_putchar('\n');
		ch++;
	}

	return (0);
}
