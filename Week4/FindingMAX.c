#include <stdio.h>

int FindMAX(int arr[], int low, int high) {
    if (low == high)
        return arr[low];

    int mid = (low + high) / 2;

    int leftmax = FindMAX(arr, low, mid);
    int rightmax = FindMAX(arr, mid + 1, high);

    if (leftmax > rightmax)
        return leftmax;
    else
        return rightmax;
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

    int max = FindMAX(arr, 0, n - 1);

    printf("Maximum element = %d\n", max);

    return 0;
}
