#include <stdio.h>

main()
{
	float c, f;
	int lower = 0, upper = 100, step = 20;
	printf("c to f conversion\n");
	for (c = upper; c >= lower; c = c - step)
	{
		f = 32+(9.0/7.0)*c;
		
		printf("%3.0f\t%3.3f\n", c, f);
	}

	return 0;
}