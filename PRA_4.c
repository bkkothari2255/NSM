#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,j,k,n;
	float m[20][20],x[20],temp,sum;
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
	
	for(k=1;k<=(n-1);k++)
	{
		for(i=(k+1);i<=n;i++)
		{
			temp = m[i][k] / m[k][k];
			for(j=k;j<=(n+1);j++)
			{
				m[i][j] = m[i][j] - (temp * m[k][j]);
			}
		}
	}
	x[n] = m[n][n+1] / m[n][n];

	for(i=(n-1);i>=1;i--)
	{
		sum = 0.0; 
		for(j=(i+1);j<=n;j++)
		{
			sum = sum + (m[i][j] * x[j]);
		}
		x[i] = (m[i][n+1] - sum) / m[i][i];
	}
	
	printf("\n Solution of equations");

	for(i=1;i<=n;i++)
	{
		printf("\n\n X[%d] = %f",i,x[i]);
	}
	return 0;
}
