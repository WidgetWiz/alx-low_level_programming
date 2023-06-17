#include <stdio.h>

/**
 * main - Prints the alphabet small and cap
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char chars[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(chars[i]);
	}
	putchar('\n');
	return (0);
}
