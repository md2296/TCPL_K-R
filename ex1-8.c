/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>
/* count lines in input */
int main()
{
	int c, b, t, nl;

	b = 0;
	t = 0;
	nl = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++b;
		if (c == '\t')
			++t;
		if (c == '\n')
			++nl;
	}

	printf("Blanks:\t%d\nTabs:\t%d\nNewlines:\t%d\nTotal:\t%d\n", \
		b, t, nl, (b + t + nl));
	
	return 0;
}
