#include <stdio.h>

int main()
{
	/**int arrayNumber[5][2] = 
	  {
	  {2, 3},
	  {4, 5},
	  {9, 0},
	  {4, 3},
	  {7, 6},
	  };
	  int i, j;

	  for ( i = 0; i < 5; i++)
	  {
	  for ( j = 0; j < 2; j++)
	  {
	  printf("arrayNumber[%d][%d] = %d\n", i, j, arrayNumber[i][j]);
	  }
	  }*/
/**	 2D array declaration
	int abc[5][4];
	/*Counter variables for the loop
	int i, j;
	for(i=0; i<5; i++) {
		for(j=0;j<4;j++) {
			printf("Enter value for abc[%d][%d]:", i, j);
			scanf("%d", &abc[i][j]);
		}
	}*/


/**
	int abc[5][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11},
		{12,13,14,15},
		{16,17,18,19},
	};

	for (int i = 0; i <= 4; i++)
	{
		printf("%p ", abc[i]);
	}*/

/**
	int n;

	printf("size of 'char' on my computer: %ld bytes\n",sizeof(char));
	printf("size of type 'int' on my computer: %ld byte\n",sizeof(int));
	printf("size of type 'float' on my computer: %ld byte\n",sizeof(float));
       printf("size of type 'double' on my computer: %ld byte\n",sizeof(double));*/

	int *p;
	int **q;
	printf("Size of pointer: %lu\n", sizeof(p));
	printf("size of pointer to pointer: %lu\n", sizeof(*q));

	return 0;
}
