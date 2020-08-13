/* Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. */

#include <stdio.h>
/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; floating-point version */
float tocels(float fahr);

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /* lower limit of temperatuire scale */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;

	while (fahr <= upper) {
		celsius = tocels(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}

float tocels(float fahr)
{
	return ((5.0/9.0) * (fahr-32.0));
}
