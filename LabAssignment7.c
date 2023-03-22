#include <stdio.h>
void bubbleSort(int arr[], int n);

void bubbleSort(int arr[], int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
	{
        int count = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{ 
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
                count++;
			}  
            
		}
        printf("Iternation %d: %d\n", i, count);
	}
    
    
}
void printArray(int arr[], int n)
{
	printf("\tData:\n\t");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
    printf("\n");
}
int main()
{
    int arr[] = {97, 16,  45,  63,  13,  22,  7,  58,  72};
    printArray(arr, 9);
    bubbleSort(arr, 9);
    printArray(arr, 9);

}

//97  16  45  63  13  22  7  58  72