#include "Header.h"

void CountingSort(int arr[], int sz) {
	clock_t T1 = clock();
	
	int i, j, k;
	int idx = 0;
	int min, max;

	min = max = arr[0];
	for (i = 1; i < sz; i++) {
		min = (arr[i] < min) ? arr[i] : min;
		max = (arr[i] > max) ? arr[i] : max;
	}

	k = max - min + 1;
	
	int *B = new int[k];
	for (i = 0; i < k; i++) B[i] = 0;

	for (i = 0; i < sz; i++) B[arr[i] - min]++;
	for (i = min; i <= max; i++)
		for (j = 0; j < B[i - min]; j++) arr[idx++] = i;


	delete[] B;
	clock_t T2 = clock();
	double T = T2 - T1;
	cout << "Time-consume of this function: ";
	printf("%.6lf s", T / CLOCKS_PER_SEC);
}