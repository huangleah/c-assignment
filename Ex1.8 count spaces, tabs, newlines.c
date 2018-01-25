#include <stdio.h>

main()
{
	int c, nb=0, nt=0, nl=0;
	while ((c = getchar()) != EOF)
		if (c == ' ')
			nb++;
		else if (c == '\t')
			nt++;
		else if (c == '\n')
			nl++;
		else
			;
	printf("nb=%d\nnt=%d\nnl=%d\n", nb, nt, nl);

}