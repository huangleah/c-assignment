/*Ex5.3, pointer version of strcat */

#include <stdio.h>

void strcat(char *s, char *t)
{
	
	while (*s++ != '\0')
		;

	s--;
	while ( (*s++ = *t++)!= '\0')
		;
}
void main()
{
	char s1[1000] = "this is not an apple";
	char t1[500] = "this is an apple";

	strcat(s1, t1);

	printf("%s\n", s1);
	printf("%s\n", t1);

}

