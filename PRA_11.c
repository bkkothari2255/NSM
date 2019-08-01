#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int i;
	float x1,y1,x,y,xf,h;
	float f(float,float);
	printf("\nEnter x1: ");
	scanf("%f",&x1);
	printf("\nEnter y1: ");
	scanf("%f",&y1);
	printf("\nEnter h: ");
	scanf("%f",&h);
	printf("\nEnter xf: ");
	scanf("%f",&xf);
	x = x1;
	y = y1;
	i = 1;
	printf("\n");
	printf("\n\n I = %d \n X = %f \n Y = %f",i,x,y);
	while(x <= xf)
	{
		y = y + (h * f(x,y));
		x = x + h;
		i = i + 1;
		printf("\n\n I = %d \n X = %f \n Y = %f",i,x,y);
	}
	return 0;
}
float f(float x,float y)
{
	return(x*y);
}
