#include <stdio.h>
void swap (int *x, int *y){
	int z = *x;
	*x = *y;
	*y = z;
}

 int main()
{
    int arr[] = {5,4,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    	void bubble_sort(int arr[]){
		int i,j;
		for(i = 0; i < len - 1; i++)
			for(j = 0; j < len - i - 1; j++)
				if (arr[j] > arr[j+1])
					swap(&arr[j], &arr[j+1]);
		}

	bubble_sort(arr);
    printf("Sorted array: \n");
    int i;
    for (i=0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}