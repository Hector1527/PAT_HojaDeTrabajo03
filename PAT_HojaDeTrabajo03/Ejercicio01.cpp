#include "Ejercicio01.h"
#include "climits"

int BusquedaBinaria(int* arr, int n)
{
	int bottom = 0, top = n - 1, mid, minimo = INT_MAX;

	while (bottom <= top)
	{
		mid = bottom + ((top - bottom) / 2);

		if (arr[mid] < minimo)
			minimo = arr[mid];

		if (arr[mid] < arr[top])
			top = mid-1;
		else if (arr[mid] > arr[top])
			bottom = mid + 1;
		else
			top--;
	}
	return minimo;
}

int Ejercicio01::findMin(int nums[], int n)
{
	return BusquedaBinaria(nums, n);
}
