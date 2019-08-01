#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float x1,x2,x3,eps;
	float f(float);

	printf("\n Enter x1: ");
	scanf("%f",&x1);
	printf("\n Enter x2: ");
	scanf("%f",&x2);
	printf("\n Enter Epsilon: ");
	scanf("%f",&eps);

	do
	{
		x3 = (x1 + x2) / 2; 
		
		if((f(x1) * f(x3)) < 0)
		{
			x2 = x3;
		}
		else
		{
			x1 = x3;
		}
	} 
	while((fabs(x1-x2) > eps) && (f(x3) != 0));
	printf("\n\n Root is = %f",x3);
	return 0;
}

float f(float x)
{
	x = (x * x * x) - (4 * x) - 9;
	return(x);
}
