#include <stdio.h>

int BinarySearch(int arr[], int left, int right, int key) {
    if (left > right)
        return -1;

    int mid = (left + right) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return BinarySearch(arr, left, mid - 1, key);
    else
        return BinarySearch(arr, mid + 1, right, key);
}


int main(){

	int n;
	printf("Enter the number of elements in array : ");
	scanf("%d", &n);

	int arr[n];


	for (int i = 0; i < n; i++) {

    	printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the element to search : ");
    scanf("%d", &key);

    int result = BinarySearch(arr, 0, n - 1, key);
 	if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}
