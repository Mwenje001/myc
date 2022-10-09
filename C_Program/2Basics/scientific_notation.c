#include <stdio.h>

int main()
{
	int dog = 2.5e4;
	double dogs = 2.5e5 ;
	double dog_s = 2.5e6; //tests %g


	printf(" %i\n %f\n %e\n %g\n %g\n", dog, dogs, dogs, dogs, dog_s);
	return 0;

}

/**
  Conversion characters
 	%f - Decimal notation
	%e - scientific notation 
	%g - Computer decides
 */
