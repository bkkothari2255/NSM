#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i,n;
	float x[20],y[20],s,s2,s4,integral,h;
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
	s = y[1] + y[n+1];
	s4=0;
	s2=0;
	for(i=2;i<=n;i=i+2)
	{
		s4 = s4 + y[i];
	}
	for(i=3;i<=n;i=i+2)
	{
		s2 = s2 + y[i];
	}
	integral = (h/3) * (s + (2*s2) + (4*s4));
	printf("\n Value of integral = %f",integral);
	return 0;
}
