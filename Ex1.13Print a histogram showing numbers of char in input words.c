#include <stdio.h>

main()
{
	int c = 0, i = 0;
	int nc = 0;
	int length[] = {0};

	while ((c = getchar()) != EOF)
	{
		if (c != ' ' && c != '\t' && c != '\n')
		{
			nc++;
		}
		else
		{
			for (i = 0; i < nc; i++)
			{
				
				printf("*");
			}
			nc = 0;
			printf("\n");
		}
	}
}
	 


	
			

		


