#include <stdio.h>

int FindMIN(int arr[], int low, int high) {
    if (low == high)
        return arr[low];

    int mid = (low + high) / 2;

    int leftmin = FindMIN(arr, low, mid);
    int rightmin = FindMIN(arr, mid + 1, high);

    if (leftmin < rightmin)
        return leftmin;
    else
        return rightmin;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = FindMIN(arr, 0, n - 1);

    printf("Minimum element = %d\n", min);

    return 0;
}
