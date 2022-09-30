#include <stdio.h>

//Run this to calculate the area of a circle

int main()
{

	int radius;
	
	printf("Please enter a radius : ");
	scanf("%i", &radius);

	double area = 3.14159 * radius * radius;
	printf("The area of a cirle with %i radius is %f\n", radius, area);
	return 0;
}
