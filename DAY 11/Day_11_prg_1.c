#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check  x is present at middle
		if (arr[m] == x)
			return m;

		//  x greater, it leave the left side
		if (arr[m] < x)
			l = m + 1;

		//  x is smaller,it leave the right side
		else
			r = m - 1;
	}

	return -1;
}

int main(void)
{
	int arr[] = { 12, 13, 24, 10, 40, 30, 32};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 40;
	int result = binarySearch(arr, 0, n - 1, x);
//using conditional operator to find the element present in array or not
	(result == -1) ? printf("Element is not present in array"): printf("Element is present at index %d",result);
	return 0;
}
