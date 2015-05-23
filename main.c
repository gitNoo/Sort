#include <stdio.h>
#include "header.h"

void main()
{
	int *a = NULL;
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	a = malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
		scanf("%d",&a[i]);

	selectionSort(a,n);
	printArr(a,n);
}