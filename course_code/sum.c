#include <stdio.h>

/**
 * main - sums a series of numbers
 * Return: 0
 */
int main(void)
{
	int n, sum = 0;

	printf("This program sums a series of nunbers.\n");
	printf("Enter numbers.(0 to terminate: \n");

	scanf("%d", &n);
	while (n != 0)
	{
		sum += n;
		scanf("%d", &n);
	}
	printf("The sum is: %d.\n", sum);

	return (0);
}
