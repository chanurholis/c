#include <stdio.h>

void bubbleSort(int arr[], int n);

void printArr(int arr[], int n);

int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);

	// printf("\nArr before sorting\n");
	// printArr(arr, n);

	bubbleSort(arr, n);

	// printf("\nArr after sorting\n");
	// printArr(arr, n);

	return 0;
}

void bubbleSort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/* code */
		}
		
	}
	
}

void printArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", arr[i]);
		}
		else
		{
			printf("%d, ", arr[i]);
		}
	}
}