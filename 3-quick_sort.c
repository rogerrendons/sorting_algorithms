#include "sort.h"

/**
 * Sorter - Sorter function
 * @lo: less item
 * @hi: max item
 * @size: size array
 * @array: array
 */
void Sorter(int *array, size_t size, size_t lo, size_t hi)
{
	size_t Result;

	if (lo < hi)
	{
		Result = part(array, size, lo, hi);
		if (Result > 0)
			Sorter(array, size, lo, Result - 1);
		Sorter(array, size, Result + 1, hi);
	}
}

/**
 * part - place change of sort
 * @array: array
 * @size: size
 * @lo: less item
 * @hi: max item
 *
 * Return: item
 */
size_t part(int *array, size_t size, size_t lo, size_t hi)
{
	int Changer;
	size_t Rec1, Rec2;

	for (Rec1 = lo, Rec2 = lo, Changer = array[hi]; Rec2 < hi; Rec2++)
	{
		if (array[Rec2] < Changer)
		{
			if (Rec1 != Rec2)
			{
				int Aux;
				Aux = array[Rec1];
				array[Rec1] = array[Rec2];
				array[Rec2] = Aux;
				print_array(array, size);
			}
			Rec1++;
		}
	}
	if (Rec1 != hi && array[Rec1] != array[hi])
	{
		int Aux;
		Aux = array[Rec1];
		array[Rec1] = array[hi];
		array[hi] = Aux;
		print_array(array, size);
	}
	return (Rec1);
}

/**
 * quick_sort - quick sort array
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	Sorter(array, size, 0, size - 1);
}
