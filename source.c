#include "header.h"

void swap(int *a,int *b){
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void printArr(int *a, int n)
{
	for(int i = 0; i < n; ++i)
		printf("%d ",a[i]);
	printf("\n");
}

void selectionSort(int *a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		int select = i;
		for (int j = i+1; j < n; ++j)
			if(a[j] < a[select])
				select = j;

		if(i != select)
			swap(&a[i],&a[select]);
	}
}