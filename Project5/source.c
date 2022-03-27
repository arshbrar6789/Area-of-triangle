#include<stdio.h>
#include<math.h>

int main()
{
	int  i;
	float area[6], sidea, sideb, angle;
	for (i = 0; i <= 5; i++)
	{
		printf("Enter the side A , sideb, angle of triangle %d:", i + 1);
		scanf_s("%f %f %f", &sidea, &sideb, &angle);
		area[i] = 0.5 * (sidea * sideb) * sin(angle);       // area of triangle 1/2ab sin(angle)
		printf("Area of traingle %d with sides %f %f with angle%f is:%f\n", i + 1, sidea, sideb, angle, area[i]);
	}


	return(0);
}