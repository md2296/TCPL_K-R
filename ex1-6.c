/* Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */

#include <stdio.h>

int main()
{
	int c;

	c = (getchar() != EOF);	
	printf("%d\n", c);

	return 0;
}
