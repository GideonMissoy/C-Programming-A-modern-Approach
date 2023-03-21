/* Prints a table of squares using a for statement. */

#include <stdio.h>

/**
 * main - prints a table of squares
 * Return: 0
 */
int main(void)
{
	int i, n;

	printf("This function prints a table of squares.\n");
	printf("Enter the nunber of entries: \n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("%10d%10d\n", i, i * i);

	return (0);
}
