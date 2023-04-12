#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 * Return: index containing `value`,false, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;

	if (array==NULL)
	{
		return(-1);
	}

	low = 0;
	high = size - 1;

	if (low > high)
	{
		return(false);
	else 
		mid = (low + high)/2;
	if (value == array[mid])
		return(mid);
	else if(value > array[mid])
		return binary_search(array, value, mid + 1,high);
	else
		return binary_search(array, value,mid - 1, low);
	}
	return(-1);
}
