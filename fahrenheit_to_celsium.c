#include <stdio>

int main()
{
	int fahrenheit;
	double celsius;

	printf("Enter the temperature in degrees fahrenheit: \n");

	scanf("%d", &fahrenheit);
	celsius = 5.0/9.0 * (fahrenheit - 32);
	printf("The converted temperature is %1f\n", celsius);
	
	return 0;
}