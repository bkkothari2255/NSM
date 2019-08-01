#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,j,n;
	float x[20],y[20],a,sum,prod;
	
	printf("\n Enter the number of table points: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("\n Enter X[%d]: ",i);
		scanf("%f",&x[i]);
		printf("\n Enter Y[%d]: ",i);
		scanf("%f",&y[i]);
	}
	printf("\n\n Enter the value of x for interpolation: ");
	scanf("%f",&a);
	sum = 0.0;
	for(i=1;i<=n;i++)
	{
		prod=1.0;
		for(j=1;j<=n;j++)
		{
			if(i!=j)
			{
				prod = prod * ((a - x[j]) / (x[i] - x[j]));
			}
		}
		sum = sum + (y[i] * prod);
	}
	printf("\n\n Interpolated value: %f",sum);
	return 0;
}
