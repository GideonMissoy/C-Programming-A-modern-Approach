#include <stdio.h>

/**
 * main - prints a multiplication table
 * Return: 0
 */
int main(void)
{
	int n, i, j;

	printf("Enter the number of entries: ");
	scanf("%d", &n);

	printf("Multiplication table for %d entries:\n", n);
	printf("-----‐-‐-‐--------------------------\n");

	for (i = 1; i <= n; i++)
	{
		for (j =1; j <= n; j++)
		{
			printf("%d\t", i * j);
		}
		printf("\n");
	}
	return (0);
}
