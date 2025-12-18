#include <stdio.h>

void Insertion_sort(int arr[], int n) {
    
    if (n <= 1)
        return;

    Insertion_sort(arr, n - 1);
    
    int key = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;
}


int main(){
    int n;
    
    printf("Enter the number of elements in array : ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n ; i++){
        printf("Enter the elements  %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    Insertion_sort(arr, n);
    
    printf("Sorted array is : \n");
    for(int i = 0; i < n; i++){
        printf("%d\n ", arr[i]);
    }
    
    return 0;
    
}


Example :


Enter the number of elements in array : 9
Enter the elements  0 : 5
Enter the elements  1 : 87
Enter the elements  2 : 94
Enter the elements  3 : 12
Enter the elements  4 : 65
Enter the elements  5 : 12
Enter the elements  6 : 88
Enter the elements  7 : 66
Enter the elements  8 : 12



Output ::

Sorted array is : 
 5
 12
 12
 12
 65
 66
 87
 88
 94
