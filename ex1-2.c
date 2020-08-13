/* Exercise 1-2. Experiment to find out what happens when prints ’s argument string contains \c, where c is some character not listed above. */
/* This program does not compile: see warnings */

#include <stdio.h>

int main()
{
	printf("\a\b\c\d\e\f\g\h\i\j\k\l\m\n\o\p\q\r\s\t\u\v\w\x\y\z\,\.\/\\\;\'\[\]\`\1\2\3\4\5\6\7\8\9\0\-\=\<\>\?\:\"\|\{\}\~\!\@\#\$\%\^\&\*\(\)\_\+");
	return 0;
}
