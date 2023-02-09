/**
 * main - computes the dimensional weight from input provided by user
 * Takes input from user.
 * Return: dimensional weight
 */
#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;

	printf("Enter height of the box: ");
	scanf("%d", &height);
	printf("Enter length og box: ");
	scanf("%d", &length);
	printf("Enter width of the box: ");
	scanf("%d", &width);
	volume = height * width * length;
	weight = (volume + 165) / 166;

	printf("Volume (cubic inches): %d \n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return (0);
}
