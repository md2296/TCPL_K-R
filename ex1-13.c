/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with
the bars horizontal; a vertical orientation is more challenging. */
/* Horizontal version */

#include <stdio.h>

#define MAXVAL 64

int main() 
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int a[MAXVAL];	/* Value array */
	char c[MAXVAL];	/* Word */

	 while((c[i] = getchar()) != EOF) {	
		if(c[i] == ' ' || c[i] == '\t' || c[i] == '\n') {
			a[j] = i;
 			i = -1; /* Begin counting again */
			j++;
		}
		i++;
	} 

	a[j] = i;
	sum = j;

	for(j = 0; j <= sum; j++) { 
		for (i = 0; i < a[j]; i++) {
			printf("*");
		} 
		printf("\n");
	}

	return 0;
}
