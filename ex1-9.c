/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */

#include <stdio.h>

int main()
{
	short flag;
	int c;

	flag = 0;

	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			flag = 0;
			printf("%c", c);
		} else {
			if (flag == 0) {
				printf(" ");
				flag = 1;
			}
		}
	}
	
	return 0;
}
