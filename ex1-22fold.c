#include <stdio.h>
#define ML 128

int main(void)
{
	int i = 0;
	int j = 0;
	char c[ML];

	while((c[i]=getchar()) != '\n') {
		++i;
		if(i >= ML) break;
	}
	c[i] = '\0';
	for(i = 0; c[i] != '\0'; ++i) {
		if(i == 32 || i == 64 || i == 96) {
			for(j = (ML-2); j > i;  --j) c[j+1] = c[j];
			c[i+1] = '\n';
		}
	}
	i = 0;
	while(c[i] != '\0') {
		printf("%c", c[i]);
		++i;
	}
	return 0;
}
