/**
 * main - converts a Fahrenheit temp to celsius
 * Return: temp in celsius
 *
 * Defining SCALE_FACTOR to be (5.0f / 9.0f) instead of (5 / 9)
 * is important, because C turncates the result when two ints are divided.
 * The value (5 / 9) would be 0, which defn isn't what we want.
 */
#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)
int main(void)
{
	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
	printf("Celsius equivalent: %.1f\n", celsius);

	return (0);
}
