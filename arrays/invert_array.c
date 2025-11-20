#include <stdio.h>

void invert_array(int *array, int size)
{
	int	i = 0;
	int j = size - 1;
	int temp;

	while (i < j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i++;
		j--;
	}
}

int	main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	int size = 5;
	for (int i = 0; i < 5; i++)
		printf("%d ", array[i]);
	puts("\n");
	invert_array(array, size);
	for (int i = 0; i < 5; i++)
		printf("%d ", array[i]);
}
