/* Replaces spaces in a string with tabs. */
#include <stdio.h>
#define ML 128
#define TS 4

int main(void)
{
	int i = 0;
	int j = ML;
	char c[ML];

	while((c[i]=getchar()) != '\n') ++i;
	
	for(i = 0; c[i] != '\n'; ++i) {
		if(c[i] == ' ' && c[i+1] == ' ' \
			&& c[i+2] == ' ' && c[i+3] == ' ') {
			c[i] = '\t';
			for(j = i; j < (ML-TS); ++j) c[j+1] = c[j+TS];
		}
	}

	i = 0;
	while(c[i] != '\n') {
		printf("%c", c[i]);
		++i;
	}
	printf("\n");
	
	return 0;
}
