#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, max;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i = 0; i < n ; i++){
        printf("Enter the elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    
    printf("The largest element in array is : %d", max);
  
    
}




Example :- 
Enter the number of elements in the array : 5
Enter the elements 1: 1
Enter the elements 2: 2
Enter the elements 3: 5
Enter the elements 4: 9
Enter the elements 5: 6


Output :- 

The largest element in array is : 9
  
