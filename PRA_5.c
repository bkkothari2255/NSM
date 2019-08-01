#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,j,k,n;
	float m[20][20],temp,comm;
	printf("\n How many equations do you want? : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=(n+1); j++)
		{
			printf("\n Enter M[%d][%d]: ",i,j);
			scanf("%f",&m[i][j]);
		}
	}
	for(k=1; k<=n; k++)
	{
		temp = m[k][k];
		for(j=k; j<=(n+1); j++)
		{
			m[k][j] = m[k][j] / temp;
		}
		for(i=1; i<=n; i++)
		{
			if(i!=k)
			{
				comm = m[i][k];
				for(j=k;j<=n+1;j++)
				{
					m[i][j] = m[i][j] - (comm * m[k][j]);
				}
			}
		}
	}
	printf("\n Solution of equations");

	for(i=1;i<=n;i++)
	{
		printf("\n\n X[%d] = %f",i,m[i][n+1]);
	}
	return 0;
}
