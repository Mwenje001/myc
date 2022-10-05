#include <stdio.h>

int main()
{
	printf("The number of eggs for the day: ");

	int eggs ;
	scanf("%i", &eggs);

	double dozen = (double) eggs / 12;
	printf("Congratulations!! You have harvested %f dozen of eggs. \n", dozen);

	return 0;

}

//type casting - changing the value of a particular data type. 'for example (double) before integer [variable - egg].
//double and int are data types.
