#include "Header.h"


void InsertionSortA(int *A, int n) //Ascending
{
	clock_t T1 = clock();
	int key, j;
	for (int i = 1; i < n; i++)
	{
		key = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > key)
		{
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = key;
	}
	clock_t T2 = clock();
	double T = T2 - T1;
	cout << "Time-consume of this function: ";
	printf("%.9lf s", T / CLOCKS_PER_SEC);
	return;
}

void InsertionSortD(int *A, int n) //Ascending
{
	clock_t T1 = clock();
	int key, j;
	for (int i = 1; i < n; i++)
	{
		key = A[i];
		j = i - 1;
		while (j >= 0 && A[j] < key)
		{
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = key;
	}
	clock_t T2 = clock();
	double T = T2 - T1;
	cout << "Time-consume of this function: ";
	printf("%.9lf s", T / CLOCKS_PER_SEC);
	return;
}


