/* Calculates a broker's commission. */

#include <stdio.h>

/**
 * main - calculates a broker's commission
 * Return: 0
 */
int main(void)
{
	float commission, value;

	printf("Enter value of trades: \n");
	scanf("%f", &value);

	if (value < 2500.00f)
		commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + .0022f * value;
	else
		commission = 255.00f + .0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	printf("Commission = $%.2f\n", commission);

	return (0);
}
