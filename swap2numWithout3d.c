#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b;

	printf("Enter a and b:\n");
	scanf("%d", a);
	scanf("%d", b);

	printf("Before swapping a=%d, b=%d", a, b);
	a = a + b;
	b = a - b;
	a = a - b;

	printf("After swapping a=%d, b=%d", a, b);
	return 0;
}