#include "Header.h"

void QuickSort(int *A, int l, int r)
{
	if (l <= r)
	{
		int key = A[(l + r) / 2];

		int i = l;
		int j = r;

		while (i <= j)
		{
			while (A[i] < key)
			{
				i++;
			}
			while (A[j] > key)
			{
				j--;
			}

			if (i <= j)
			{
				swap(A[i], A[j]);
				i++;
				j--;
			}
		}
		if (l < j)
		{
			QuickSort(A, l, j);
		}
		if (r > i)
		{
			QuickSort(A, i, r);
		}
	}
	return;
}

void quickSort(int *A, int l, int r)
{
	clock_t T1 = clock();
	QuickSort(A, l, r);
	clock_t T2 = clock();
	double T = T2 - T1;
	cout << "Time-consume of this function: ";
	printf("%.6lf s", T / CLOCKS_PER_SEC);
}