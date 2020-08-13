#include <stdio.h>

#define MV 64

int main() 
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int a[MV];	/* Value array */
	char c[MV];	/* Word */

	 while((c[i] = getchar()) != '\n') {	
		if(c[i] == ' ' || c[i] == '\t') {
			a[j] = i;
 			i = -1;
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
