#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,j,k,n;
	float m[20][20],x[20],sum,temp;
	float err,maxiter,eps;
	
	printf("\n How many equations do you want? : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n+1);j++)
		{
			printf("\n Enter M[%d][%d]: ",i,j);
			scanf("%f",&m[i][j]);
		}
	}

	printf("\n Enter the number of iterations: ");
	scanf("%f",&maxiter);
	printf("\n Enter the epsilon: ");
	scanf("%f",&eps);

	for(i=1; i<=n; i++)
	{
		x[i] = 0.0;
	}

	for(k=1; k<=maxiter; k++)
	{
		for(i=1; i<=n ;i++)
		{
			sum = 0.0;
			for(j=1; j<=n; j++)
			{
				if(i!=j)
				{
					sum = sum + (m[i][j] * x[j]);
				}
			}
			temp = (m[i][n+1] - sum) / m[i][i];
			err = fabs((temp - x[i]) / temp);
			x[i] = temp;
		}
		if(err <= eps)
		{
			printf("\n Solution converges in %d iterations",k);
			for(i=1; i<=n; i++)
			{
				printf("\n X[%d] = %f",i,x[i]);
			}
		}
	}
	return 0;
}
