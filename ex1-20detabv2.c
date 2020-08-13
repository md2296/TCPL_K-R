#include <stdio.h>

#define ML 128
#define TS 3

int main(void)
{
	int i = 0;
	short j = 0;
	/*short n;*/
	char c[ML];

	while((c[i]=getchar()) != '\n') ++i;
	c[i] = '\0';
	i = 0;

	while(c[i]!='\0') {
		if(c[i] == '\t') {	
			for(j = (ML-1); j > (i+TS); --j) {
				c[j] = c[j-TS];
			}
			c[i] = ' ';
			c[i+1] = ' ';
			c[i+2] = ' ';
			c[i+3] = ' '; 	
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
