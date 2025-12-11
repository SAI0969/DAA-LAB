#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, j, key;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i = 0; i < n ; i++){
        printf("Enter the elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for(i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        
        while(j >= 0 && arr[j] > key){
            arr[j + 1 ] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
    printf("Sorted Array is : ");
    for(i = 0; i < n ; i++){
        printf("%d ", arr[i]);
    }
    
}


Example :-

Enter the number of elements in the array : 9
Enter the elements 1: 11
Enter the elements 2: 55
Enter the elements 3: 88
Enter the elements 4: 99
Enter the elements 5: 33
Enter the elements 6: 111
Enter the elements 7: 000
Enter the elements 8: 5
Enter the elements 9: 55




Output :- 

Sorted Array is : 0 5 11 33 55 55 88 99 111
