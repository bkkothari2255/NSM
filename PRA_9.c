#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,n;
	float x[20],y[20],sum=0,integral,h;
	printf("\n Enter the number of table points: ");
	scanf("%d",&n);
	for(i=1;i<=n+1;i++)
	{
		printf("\n Enter x[%d] : ",i);
		scanf("%f",&x[i]);
		printf("\n Enter y[%d] : ",i);
		scanf("%f",&y[i]);
	}
	h = x[2] - x[1];
	sum = y[1] + y[n+1];
	for(i=2;i<=n;i++)
	{
		sum = sum + (2*y[i]);
	}
	integral = (h/2) * sum;
	printf("\n Value of integral = %f",integral);
	return 0;
}
