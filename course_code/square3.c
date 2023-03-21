/**
 * Prints a table of squares using an odd method.
 * The for statement in this program initializes
 * one variable (square), tests another (i), and increments the third
 * (odd). i is the number to be squared, square is the square of i,
 * and odd is the odd number that must be added to the current square
 * to get the next (allowing the program to compute consecutive squares
 * without performing any multiplications.
 */

#include <stdio.h>

/**
 * main - prints a table of squares
 * Return: 0
 */
int main(void)
{
	int i, n, odd, square;

	printf("This program prints a table of squares.\n");
	printf("Enter the number of entries: \n");
	scanf("%d", &n);

	i = 1;
	odd = 3;
	for (square = 1; i <= n; odd += 2)
	{
		printf("%10d%10d\n", i, square);
		i++;
		square += odd;
	}
	return (0);
}
