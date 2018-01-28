
#include<stdio.h>
void copy(int a, int b);

main()
{
	int a = 10;
	int b = 0;
	printf("at initialization, a=%d, b=%d\n", a, b);
	copy(a, b);
	printf("after copy, a=%d, b=%d\n", a, b);
}

void copy(int to, int from)
{
	to = from;
}




/*this call function shows that when ARRAYs are called, a pointer to first elememt is passed instead of copies of array*/
#include<stdio.h>
void copy(char a[], char b[]);

main()
{
	char a[2] = "7"; /*use double quote or single quote with braces and '\0'; 
					   note that always add 1 to subscript cuz '\0' takes up 1 space*/
	char b[2] = "0";
	printf("at initialization, a=%s, b=%s\n", a, b);
	copy(a, b);
	printf("after copy, a=%s, b=%s\n", a, b);
}

void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

