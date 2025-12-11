#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int i, n, j;
    bool found = false;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(i = 0; i < n ; i++){
        printf("Enter the elements %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                found = true;
                break;
            }
           
        }
       if(found == true)
            break;
    }
    
if(found == true){
    printf("Duplicate found");
}
else{
    printf("Duplicate doesnot exists");
}
}




example :- 

Enter the number of elements in the array : 5
Enter the elements 1: 15
Enter the elements 2: 13
Enter the elements 3: 19
Enter the elements 4: 56
Enter the elements 5: 15



Output :- 

Duplicate found
