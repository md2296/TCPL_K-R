#include <stdio.h>
#define ML 200
#define LL 80

int main(void) 
{
	char line[ML];
	int i;

	while(1) {
		i = 0;

		while ((line[i] = getchar()) != '\n') ++i;
		line[i] = '\0';

		if (i > LL) { 
			for(i = 0; line[i] != '\0'; i++) 
				printf("%c", line[i]);
		}
		printf("\n");
		for(;i > 0; i--) line[i] = '\0';
	}
	return 0;
}
