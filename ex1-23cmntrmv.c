#include <stdio.h>
#define ML 2000 /* Maximum lines */
/* multy line
	Comment */
int main(void) 
{
	char c[ML];
	int i = 0;
	int j = 0;


	while((c[i] = getchar()) != EOF) if(i < ML) ++i;
/* Multi line comment 
		 test */	
	for(i = 0; i < ML; ++i) {
		if (c[i] == '/' && c[i + 1] == '*' ) {
			c[i] = ' ';
			c[i + 1] = ' ';
			for(j = (i + 2); c[j] != '*' && c[j + 1] != '/'; ++j)
				 c[j] = ' ';
			c[j] = ' ';
			c[j + 1] = ' ';
		}
	}

	for(i = 0; c[i] != EOF; ++i) printf("%c", c[i]);

	return 0;
}
