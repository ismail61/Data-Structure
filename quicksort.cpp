#include<stdio.h>
int partition (int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	int t;
	for (int  j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			t=arr[j];
			arr[j]=arr[i];
			arr[i]=t;
		}
	}
	i++;
	t=arr[high];
	arr[high]=arr[i];
	arr[i]=t;
	return i;
}
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int p = partition(arr, low, high);
		quickSort(arr, low, p - 1);
		quickSort(arr, p + 1, high);
	}
}
int main()
{
	int arr[] = {20, 87, 99, 9, 14, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, n-1);
	printf("Quick Sorted array: ");
	int i;
	for (i=0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
