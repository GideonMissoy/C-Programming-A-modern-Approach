#include <stdio.h>

/**
 * main - determines length of a message
 * Return: 0
 */
int main(void)
{
	int len = 0;

	printf("Enter a message: \n");
	while (getchar() != '\n')
		len++;
	printf("Your message was %d characters long.\n", len);

	return (0);
}
