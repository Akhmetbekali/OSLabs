#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i;
	printf("%s","Enter N:");
	scanf("%d", &n);
	int *array = malloc(n*sizeof(int));
	for (i = 0; i < n; i++)
	{
		array[i] = i;
		printf("%d\n", array[i]);
	}
	free(array);
	// printf("%d\n", array[0]);
	return 0;
}