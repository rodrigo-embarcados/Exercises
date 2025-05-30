#include <stdio.h>

int q5(int num)
{
  int inv = 0;
  while(num != 0)
	{
		inv = inv * 10 + num % 10;
		num /= 10;
	}
  num = inv;
  return num;
}

int main()
{
	int num = 345;
	int num2 = q5(num);
	printf("%d\n", num2);
	printf("%d\n", q5(345) == 543);
    printf("%d\n", q5(78) == 87);
    printf("%d\n", q5(3) == 3);
    printf("%d\n", q5(5430) == 345);
	return 0;
}