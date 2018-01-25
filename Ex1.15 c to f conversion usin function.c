#include <stdio.h>

float FtoC(float f);

main()
{
	float lower = 0, upper = 100, step = 20;
	float f = 0;
	float r = 0;

	for (f = lower; f <= upper; f = f + step) {
		//r = FtoC(f);
		printf("F =%f  C =%f\n", f, FtoC(f));
	}
	return 0;
	
}
	 
float FtoC(float f)
{
	float c = 0;
	c = 5.0*(f - 32.0) / 9.0;
	return c;
}
			

		


