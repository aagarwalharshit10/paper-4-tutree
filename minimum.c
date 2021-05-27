// C program to Find the minimum
// distance between two numbers
#include <stdio.h>
#include <stdlib.h> // for abs()
#include <limits.h> // for INT_MAX

int minDist(int arr[], int n, int x, int y)
{
int i, j;
int min_dist = INT_MAX;
for (i = 0; i < n; i++)
{
	for (j = i+1; j < n; j++)
	{
		if( (x == arr[i] && y == arr[j] ||
			y == arr[i] && x == arr[j]) && min_dist > abs(i-j))
		{
			min_dist = abs(i-j);
		}
	}
}
return min_dist;
}

/* Driver program to test above function */
int main()
{
	int arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 3;
	int y = 6;

	printf("Minimum distance between %d and %d is %d\n", x, y,
			minDist(arr, n, x, y));
	return 0;
}
