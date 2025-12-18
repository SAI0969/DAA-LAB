#include <stdio.h>

int Find_Max(int arr[], int n){
    int max = arr[0];
    for (int i = 0 ; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        
    }
    return max;
    
}


int main(){
    int i, n;
    
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i = 0; i < n ; i++){
        printf("Enter the element %d : ", i);
        scanf("%d", &arr[i]);
    }

    int max = Find_Max(arr, n);
    printf("The max element is %d ", max);
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
