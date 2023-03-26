#include <stdio.h>
#define N 10

/**
 * main - reverses a series of numbers
 * Return: 0
 */
int main(void)
{
	int a[N], i;

	printf("Enter the numbers: \n");
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);

	printf("In reverse order: \n");
	for (i = N - 1; i >= 0; i--)
		printf( "%d", a[i]);
	printf("\n");

	return (0);
}
