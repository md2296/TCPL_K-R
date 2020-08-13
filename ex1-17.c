/* Exercise 1-17. Write a program to print all input lines that are longer than 80 characters. */

#include <stdio.h>

#define NUM 50 /* Maximum number of lines */
#define SIZE 256 /* Array size */

int main()
{
	int c;
	int i;
	int counter;
	int counter2;
	int a[NUM][SIZE];
	int index[SIZE];
	
	counter = 0;
	counter2 = 0;
	
	for(i = 0; counter2 <= NUM; i++) {
		while((c = getchar()) != EOF) {
			if(c != '\n' && counter2 <= NUM && counter <= SIZE) {
				a[counter2][counter] = c;
				counter++;
			} else
				break;
		}
		index[i] = counter;
		counter = 0;
		counter2++;
	}

	for(counter = 0; counter < i; counter++) {
		if(index[counter] >= 80) {
			for(counter2 = 0; counter2 < index[counter]; counter2++ )
				printf("%c", a[counter][counter2]);

			printf("\n");
		}
		
	}
	
	return 0;
}
