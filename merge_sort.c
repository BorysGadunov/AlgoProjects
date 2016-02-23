#include <stdio.h>

void mergeSort(int [], int, int, int);
void partition(int [], int, int);

int main(int argc, char const *argv[])
{
	int list[50];
	int size;
	clrscr();
	printf("Enter total number of elements:\n");
	scanf("%d", &size);
	printf("Enter the elements:\n");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &list[i]);
	}
	partition(list, 0, size - 1);
	
	printf("After merge sort:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d  \n", list[i] );
	}
	getch();
	return 0;
}
void partition(int list[], int low, int high){
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		partition(list, low, mid);
		partition(list, mid + 1, high);
		mergeSort(list, low, mid, high);
	}
}
void mergeSort(int list[], int low, int mid, int high){
	int i, mi, k, lo, temp[50];
	lo = low;
	i = low;
	mi = mid + 1;
	while((lo <= mid) && (mi <= high)){
		if (list[lo] <= list[mi])
		{
			temp[i] = list[lo];
			lo++;
		}
		else
		{
			temp[i] = list[mi];
			mi++;
		}
		i++;
	}
	if (lo < mid)
	{
		for (k = mi; k <= mid; k++)
		{
			temp[i] = list[k];
			i++;
		}
	}
	for (k = low; k <= high; k++)
	{
		list[k] = temp[k];
	}
}