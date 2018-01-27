/*Quite fragile*/

#include<stdio.h>
#define MAXLEN 10
int htoi(char s[]);
int readline(char s[]);
char convert(char s);


main()
{
	char c[MAXLEN] = {0};
	int cnt = 0;

	cnt = readline(c);
	printf("%d\n", htoi(c, cnt));
}

int readline(char in[])
{
	char c;
	int i = 0;
	while ((c = getchar()) != EOF && c != '\n')
		in[i++] = c;

	in[i] = '\0';
	return i;
	//return in;
}

char convert(char s)
{
	int i = 0;

	if (isdigit(s))
		s = s - '0';
	else if (s <= 'f' && s >= 'a')
		s = s - 'W';
	else if (s <= 'F' && s >= 'A')
		s = s - '7';
	else
		s = 0;

#if 0
	for (i; i <= MAXLEN - 1; i++)
	{
		if (isdigit(s))
			s = s - '0';
		else if (s <= 'f'&&s >= 'a')
			s = s - '6';
		else if (s <= 'F'&&s >= 'A')
			s = s - 'V';
		else
			s = 0;
	}
#endif

	return s;
}

int htoi(char s[], int cnt)
{
	int n = 0;
	int i = 0;
	char c[MAXLEN];

	for(i = 0; i < cnt ; i ++)
	{
		c[i] = convert(s[i]);
		n = n * 16 + c[i];		
	}
	return n;

}