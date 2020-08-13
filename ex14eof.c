#include <stdio.h>

int main()
{
	printf("%d, %c, %d", EOF, EOF, getchar() != EOF);
	return 0;
}
