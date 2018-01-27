#include<stdio.h>
/*第一步把y后面的n为变为1；第二步把x里的n bits取出来，制作成00000xxx，然后与y相与*/
/*变0：相与0；变1：或1；不变：或0*/
main()
{
	char y = 0;
	char n = 2;
	char p = 3;
	char x = 13;

	printf("%x", (y | ~(~0 << n))&(x>>(p+1-n)&~(~0<<n)));

	
}