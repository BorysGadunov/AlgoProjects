#include <stdio>

int main()
{
	int heap[10], num, c, root, temp;
	clrscr();
	printf("Enter number of elements: \n");
	scanf("%d", &num);
	printf("Enter the nos:\n");
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &heap[i]);
	}
	for (int i = 0; i < num; i++)
	{
		c = i;
		do
		{
			root = (c - 1) / 2;
				if (heap[root] < heap[c]) //to create max heap array
				{
					temp = heap[root];
					heap[root] = heap[c];
					heap[c] = temp;
				}
				c = root;
		} while( c != 0 );
	}
	printf("Heap array: ");
	for (int i = 0; i < num; i++)
	{
		printf("%d\t ", heap[i] );
	}
	for (int j = num - 1; j >= 0; j--)
	{
		temp = heap[0];
		heap[0] = heap[j]; //swap max element with rightmost heap element
		heap[j] = temp;
		root = 0;
		do
		{
			c = 2 * root + 1; //left node of root element
			if ( (heap[c] < heap[c + 1]) && c < j - 1)
				c++;
			if (heap[root] < heap[c] && c < j) //again rearrange to max heap array
			{
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while( c < j );
	}
	printf("The sorted array is : \n");
	for (int i = 0; i < num; i++)
		printf("\t %d", heap[i] );
	printf("\n Complexity : \n Best case = Avg case = Worst case = O(nlogn) \n" );
	getch();
	return 0;
}