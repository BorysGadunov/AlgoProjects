#include <stdio.h>

int main()
{
	int count, n, t1 = 0, t2 = 1, display = 0;

	printf("ENTER number of terms: \n");

	scanf("%d", &n);

	printf("Fibonachi Series: %d + %d +", t1, t2);

	count = 2;

	while(count < n){
		display = t1 + t2;
		t1 = t2;
		t2 = display;
		++count;
		printf("%d+", display);
	}

	return 0;
}