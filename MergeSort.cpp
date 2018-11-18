#include "Header.h"
void Merge(int *a, int left, int mid, int right)
{
	int *temp; 
	int i = left; 
	int j = mid + 1; 

	temp = new int[right - left + 1]; 

	for (int k = 0; k <= right - left; k++)
	{
		
		if (a[i] < a[j])
		{
			
			temp[k] = a[i];
			i++; 
		}
		else 
		{
			temp[k] = a[j];
			j++; 
		}

		
		if (i == mid + 1)
		{
			
			while (j <= right)
			{
				k++;
				temp[k] = a[j];
				j++;
			}
			break;
		}

		
		if (j == right + 1)
		{
			
			while (i <= mid)
			{
				k++;
				temp[k] = a[i];
				i++;
			}
			break;
		}
	}

	for (int k = 0; k <= right - left; k++) 
		a[left + k] = temp[k];
	delete temp;
}

void mergeSort(int *a, int Left, int Right)
{
	int Mid;
	if (Left < Right)
	{
		Mid = (Left + Right) / 2;
		mergeSort(a, Left, Mid);
		mergeSort(a, Mid + 1, Right);

		Merge(a, Left, Mid, Right);
	}
}

void MergeSort(int *a, int Left, int Right)
{
	clock_t T1 = clock();
	mergeSort(a, Left, Right);
	clock_t T2 = clock();
	double T = T2 - T1;
	cout << "Time-consume of this function: ";
	printf("%.6lf s", T / float(CLOCKS_PER_SEC));
}
