#include <stdio.h>

/**
 * main - checks whether n compared to 0
 * Return: 0
 */
int main()
{
	int n;

	printf("Enter the number to check: \n");
	scanf("%d", &n);

	if (n < 0)
		printf("n is less than 0\n");
	else if (n == 0)
		printf("n is equals to 0\n");
	else
		printf("n is geeater than 0\n");

	return (0);
}
