#include "sort.h"
/**
 * quick_sort -
  * @array: array to sort
  * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	size_t mysize;
	int start, end;

	start = 0;
	mysize = size;
	end = size - 1;
	sort(array, start, end);
}

void sort(int *array, size_t start, size_t end)
{
	size_t left, right;
	int pivot;

	if (end - start < 2)
		return;
	pivot = array[start];
	left = start - 1;
	right = end + 1;
	while (1)
	{
		do left++;
		while (array[left] < pivot);
		do right--;
		while (array[right] > pivot);
		if (left >= right)
			break;
		int swap_in;

		swap_in = array[left];
		array[left] = array[right];
		array[right] = swap_in;
		print_array(array, 10);
	}
	sort(array, start, right + 1);
	sort(array, right + 1, end);
}
