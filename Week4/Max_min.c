#include <stdio.h>
int Maximum(int arr[], int low, int high){
if(low == high){
    return arr[low];
}

int mid = (high + low) / 2;

int leftmax = Maximum(arr, low, mid);
int rightmax = Maximum(arr, mid + 1, high);

if(leftmax > rightmax){
    return leftmax;
}

else{
    return rightmax;
}

}



int Minimum(int arr[], int low, int high){
if(low == high){
    return arr[low];
}

int mid = (high + low) / 2;

int leftmax = Minimum(arr, low, mid);
int rightmax = Minimum(arr, mid + 1, high);

if(leftmax > rightmax){
    return rightmax;
}

else{
    return leftmax;
}

}

int main(){
int n;

printf("Enter the number of elements in array : ");
scanf("%d", &n);


int arr[n];

for(int i = 0; i < n; i++){

    printf("Enter the element %d : ", i);
    scanf("%d", &arr[i]);
}


int max = Maximum(arr, 0 , n - 1);
printf("Maximum element is : %d", max);

int min = Minimum(arr, 0 , n - 1);
printf("\nMimimum element is : %d", min);
return 0;
}
