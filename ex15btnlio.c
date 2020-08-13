#include <stdio.h>

/* Count spaces, tabs, lines and backspaces in input */
int main()
{
	int c, nl, s, t, b;
	c = nl = s = t = b = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
			printf("\\n");
		}
		if (c == ' ') {
			++s;
			printf(" ");
		}
		if (c == '\t') {
			++t;
			printf("\\t");
		}
		if (c == '\b') {
			++b;
			printf("\\b");
		}	
	}
	printf("nl=%d, s=%d, t=%d, b=%d\n", nl, s, t, b);
	printf("%d, %c\n", c, c);
	
	return 0;
}
