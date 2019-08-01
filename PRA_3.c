#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define f(x) ((x * x * x) - (4 * x) - 9)
#define f1(x) ((3 * x * x) - 4)

int main()
{
	int i,n;
	float x0,x1,eps,del,rel_err;
	printf("\n Enter x0: ");
	scanf("%f",&x0);
	printf("\n Enter number of iterations permmited: ");
	scanf("%d",&n);
	printf("\n Enter Epsilon: ");
	scanf("%f",&eps);

	for(i=1; i<=n; i++)
	{
		x1 = x0 - (f(x0) / f1(x0));
		rel_err = fabs((x1 - x0) / x1);
		x0 = x1;
	}
	if((rel_err <= eps) || (f(x1) == 0))
	{
		printf("\n Approximate root = %f",x1);
	}
	return 0;
}

