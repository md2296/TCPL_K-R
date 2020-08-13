/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input. */

#include <stdio.h>

#define ARRAYSIZE 94
#define ASCIIRANGELOW 32
#define ASCIIRANGEHIGH 126

int main()
{
	int i;
	int j;
	int c;
	int a[ARRAYSIZE];
	int chars[ARRAYSIZE];

	for(i = 0; i <= ARRAYSIZE; i++) {
		chars[i] = ASCIIRANGELOW + i;
		a[i] = 0;
	}
	
	while((c = getchar()) != EOF) {
		for(i = 0; i <= ARRAYSIZE; i++) {
                	if (chars[i] == c)
				a[i] += 1;
        	}
	}

	for(i = 0; i <= ARRAYSIZE; i++) {
                printf("%c: ", chars[i]);
		for(j = 0; j < a[i]; j++)
			printf("*");
		printf("\n");
        }

	return 0;
}
