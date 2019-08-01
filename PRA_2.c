#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float);
int main()
{
	float x1,x2,x3,eps,f1,f2,f3;
	printf("\n Enter x1: ");
	scanf("%f",&x1);
	printf("\n Enter x2: ");
	scanf("%f",&x2);

	printf("\n Enter Epsilon: ");
	scanf("%f",&eps);
	f1 = f(x1);
	f2 = f(x2);
	do
	{
		x3 = ((x1 * f2) - (x2 * f1)) / (f2 - f1);
		f3 = f(x3);

		if((f1 * f3) < 0)
		{
			x2 = x3; 
			f2 = f3;
		}
		else
		{
			x1 = x3;
			f1 = f3;
		}
	}
	while(fabs((x1-x2)/x2) > eps);
	printf("\n\n Root is = %f",x3);
	return 0;
}
float f(float x)
{
	x = (x * x * x) - (4 * x) - 9;
	return(x);
}
