#include <stdio.h>

main()
{
	printf("%f", EOF);
	printf("%d\n", (getchar() != EOF));
}