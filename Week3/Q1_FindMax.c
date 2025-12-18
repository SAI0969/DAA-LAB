#include <stdio.h>

int Find_Max(int arr[], int n) {
   
    if (n == 1)
        return arr[0];

    int max_of_rest = Find_Max(arr, n - 1);

    
    if (arr[n - 1] > max_of_rest)
        return arr[n - 1];
    else
        return max_of_rest;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = Find_Max(arr, n);
    printf("The max element is %d\n", max);

    return 0;
}


Example :

Enter the number of elements : 5
Enter the element 0 : 1
Enter the element 1 : 6
Enter the element 2 : 9
Enter the element 3 : 5
Enter the element 4 : 3


Output ::

The max element is 9 
