#include <stdio.h>


int main()
{
	/**int x,y,z,m;
	x = 6;
	y = 12;

	m = x & y;


	printf("AND = %d\n", m);
	
	int or = x | y;
	printf("OR = %d\n", or);

	int xor = x ^ y;
	printf("XOR = %d\n", xor);

	int shiftRight = y >> 2;
	printf(" >> = %d\n", shiftRight);

	int shiftLeft = x << 2;
	printf("<< = %d\n", shiftLeft);

	int not = x ~ y;
	printf("NOT = %d\n", not);*/
	
	/**char x = 1, y = 2;
	if(x&y)
		printf("Result of x&y is 1\n");
	if(x&&y)
		printf("Result of x&&y is 1\n");*/
	
	int a = 4, b = 3;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("After XOR, a = %d and b = %d\n", a, b);
	
	return 0;

}
