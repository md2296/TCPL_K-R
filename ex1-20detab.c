#include <stdio.h>

#define ML 128
#define TS 4

int main(void)
{
	int i = 0;
	short j = 0;
	short n;
	char c[ML];

	while((c[i]=getchar()) != '\n') ++i;
	c[i] = '\0';
	i = 0;

	while(c[i]!='\0') {
		if(c[i] == '\t') {
			n = ML - TS;
			while (n != i) {
				c[n+(TS-1)] = c[n];
				n--;
			}
			for(j = 0; j < TS; ++j) {
				/*if(j==0)*/ c[i+j] = ' ';
				/*else {
					c[i+j]
				}*/
			}
		}
		++i;
	}

	c[i] = '\0';
	i = 0;

	while(c[i] != '\0') {
		printf("%c", c[i]);
		++i;
	}

	return 0;
}
