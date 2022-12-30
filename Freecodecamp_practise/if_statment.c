#include <stdio.h>
/**
  int inno(int num1, int num2)
  {
  int result;

  if(num1 > num2)
  {
  result = num1;
  }
  else
  {
  result = num2;
  }
  return result;
  }

  int main()
  {
  printf("%d\n", udo(15, 10));
  return 0;
  }*/

int udo(int num1, int num2, int num3)
{
	int result;

	if (num1 >= num2 && num1 >= num3)
	{
		result = num1;
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		result = num2;
	}
	else  {
		result = num3;
	}
	return result;
}
int main()
{
	printf("%d\n", udo(15, 10, 24));


	return 0;
}
