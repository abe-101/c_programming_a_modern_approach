#include <stdio.h>

#define N 30

void selection_sort(int a[], int n);

int main(void)
{
	char ch;
	int i, entries = 0, a[N];

	printf("Enter a series of up to %d integers: ", N);
	for (i = 0; i < N && (ch = getchar() != '\n'); i++) {
		scanf("%d", &a[i]);
		entries++;
	}

	printf("Unsorted array: ");
	for (i = 0; i < entries; i++) 
		printf("%d ", a[i]);

	selection_sort(a, entries);
	
	printf("\nSorted array: ");
	for (i = 0; i < entries; i++)
		printf("%d ", a[i]);

	printf("\n");

	return 0;
}

void selection_sort(int a[], int n)
{
	if (n == 0) return;

	int i, index_largest = 0;

	for (i = 1; i < n; i++) {
		if ( a[i] > a[index_largest])
			index_largest = i;
	}

	int largest = a[index_largest];
	a[index_largest] = a[n - 1];
	a[n - 1] = largest;

	selection_sort(a, n - 1);
}
