/* Exercise 1-12. Write a program that prints its input one word per line. */

#include <stdio.h>

#define ENDED 1
#define STARTED 0
#define DOWN 0
#define UP 1

int main()
{
	int c;
	short state;
	short flag;

	state = STARTED;
	flag = DOWN;
	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			state = ENDED;
		else
			state = STARTED;

		if (state == ENDED) {
			if (flag == DOWN) {
				printf("\n");
				flag = UP;
			}
		}

		if (c != ' ' && c != '\n' && c != '\t') {
			printf("%c", c);
			flag = DOWN;
		}
	}

	return 0;
}
