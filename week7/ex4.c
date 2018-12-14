#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

void *my_realloc(void *ptr, int size){

	if (ptr == NULL)
        return malloc(size*sizeof(ptr));

    if (size == 0)
    {
        free(ptr);
        return NULL;
    }
	
	void *result = malloc(size*sizeof(ptr));
	memcpy(result,ptr,size);
	free(ptr);

	return result;
}

int main()
{
	printf("Enter initial size of array:");
	int size = 0;
	scanf("%d", &size);

	int* ptr = malloc(size * sizeof(int));
	for(int i = 0; i < size; i++){
		ptr[i] = i;
		printf("%d\n", ptr[i]);
	}
	printf("Enter new size of array:");
	int new_size = 0;
	scanf("%d", &new_size);

	ptr = my_realloc(ptr, new_size * sizeof(int));
	
	for(int i = 0; i < new_size; i++){
		printf("%d\n", ptr[i]);
	}
}