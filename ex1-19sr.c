#include <stdio.h>
#define ML 200

void reverse(char word[], int j)
{
	char retw[ML];
	int h = 0;

	while(word[h] != '\0') {
		retw[j] = word[h];
		j--;
		h++;
	}

	for(h = 0; retw[h] != '\0'; h++) {
		printf("%c", retw[h+1]);
		if(h>0) retw[h] = '\0';
	}
}

int main(void) 
{
	char line[ML];
	int i;

	while(1) {
		i = 0;

		while ((line[i] = getchar()) != '\n') ++i;
		line[i] = '\0';

		reverse(line, i); 

		printf("\n");
		for(;i > 0; i--) line[i] = '\0';
	}
	return 0;
}
