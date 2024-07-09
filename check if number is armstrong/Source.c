#include<stdio.h>
int x,y,z,rem, order,result=1,final;
void main(void)
{
	printf("enter any number");
	scanf_s("%d", &x);
	y = x;
	z = x;
	while (y != 0)
	{
		y /= 10;
		order++;
	}
	printf(" order :%d\n", order);
	for (int i = 0; i < order; i++)
	{
		rem = z % 10;
		for (int j = 0; j < order; j++)
		{
			result = result * rem;
		}
		z /= 10;
		final = final + result;
		result = 1;
	}
	(x == final) ? printf("%d an armstong number since it is =%d", x, final)
		: printf("%d not  an armstong number since it is !=%d", x, final);

}