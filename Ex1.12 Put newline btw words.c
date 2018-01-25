#include <stdio.h>

main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ' && c != '\t')
		{
		putchar(c); }
		else if (c == ' ')
			putchar('\n');
		else if (c == '\t')
			putchar('\n');


	}
}
	 


	
			

		


