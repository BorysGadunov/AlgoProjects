#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, determinant, root1, root2, real, imag;
	printf("Enter coefficients a, b, c: \n");
	scanf("%f%f%f", &a, &b, &c);

	determinant = b * b - 4 * a * c;
	if (determinant > 0)
	{
		root1 = (-b+sqrt(determinant))/(2*a);
		root2 = (-b-sqrt(determinant))/(2*a);
		printf("Roots are: %.2f and %.2f", root1, root2 );
	} else if(determinant == 0) {
		root1 = root2 = -b/(2*a);
		printf("Roots are: %.2f and %.2f \n");
	} else {
		real = -b/(2*a);
		imag = sqrt(-determinant)/(2*a);
		printf("Roots are: %.2f+%.2fi and %.2f-%.2fi \n", real, imag, real, imag );
	}
	return 0;
}