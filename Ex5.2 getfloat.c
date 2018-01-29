#include <ctype.h>
#include <stdio.h>

#define BUFSIZE 100
#define SIZE 20

int getch(void);
int getfloat(float *f);
void ungetch(int);

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free position in buf */

int getch(void) /* get a (possibly pushed-back) character */
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /* push character back on input */
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}

main()
{

	int i, n, getfloat(float *);
	float array[SIZE] = { 0 };
	
	for (n = 0; n < SIZE && getfloat(&array[n]) != EOF; n++)
		;
	
	for (i = 0; i<SIZE; i++)
		printf("%f\n", array[i]);
}




/* getint: get next integer from input into *pn */
int getfloat(float *pn)
{
	int c, sign;
	float frac=0.1, fraction; /*float精度达不到，frac实际不等于0.1，计算时用除以10准确*/

	while (isspace(c = getch())) /* skip white space */
		;

	if (!isdigit(c) && c != EOF && c != '+' && c != '-'&&c != '.') 
	{
		ungetch(c); /* it is not a number */
		return 0;
	}

	sign = (c == '-') ? -1.: 1;
	 

	if (c == '+' || c == '-')
		c = getch();

	for (*pn = 0; isdigit(c); c = getch()) /*条件里不要加c='.'，.会被读作46*/
		*pn = 10 * *pn + (c - '0');
	if (c == '.')
		c = getch();

	for (fraction = 0;isdigit(c); c = getch()) /*fractional part*/
		{
			fraction = fraction + (c - '0') * frac;
			frac *= frac;

		}
	

	*pn = (*pn + fraction)*sign;
	if (c != EOF)
		ungetch(c);
	return c;
}