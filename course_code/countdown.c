#include <stdio.h>

/**
 *  * main - prints countdown message
 *   * Return: 0
 *    */
int main(void)
{
	int i = 10;

	while (i > 0)
	{
		printf("T minus %d and counting.\n", i);
		i--;
	}
	return (0);
}
