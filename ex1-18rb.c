#include <stdio.h>
#define ML 200
#define LL 80

int main(void) 
{
	char line[ML];
	int i;

	while(1) {
		i = 0;
		short flag = 0;

	
		while ((line[i] = getchar()) != '\n') ++i;
		line[i] = '\0';

		for(i = 0; line[i] != '\0'; i++) {
			if (line[i] == '\n' || line[i] == ' ' \
				|| line[i] == '\t') {
				if (line[i-1] != ' ' && flag == 1)
					 printf(" ");
			} else {
				flag = 1;
				printf("%c", line[i]);
			}
		}
		for(;i > 0; i--) line[i] = '\0';
	}
	return 0;
}
