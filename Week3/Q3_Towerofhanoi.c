#include <stdio.h>

void towerofhanoi(int n, char Source, char Auxilary, char Target){

  if (n == 1){
    printf("\n Move disk ---> 1 from %c to %c", Source, Target);
    return;
  }

  towerofhanoi(n-1, Source, Target, Auxilary);
  printf("\n Move disk ---> %d from %c to %c ", n, Source, Target);

  towerofhanoi(n-1, Auxilary, Source, Target);
  
}

int main(){
  int n;

  printf("Enter the number of disks: ");
  scanf("%d", &n);

  towerofhanoi(n,'A', 'B', 'C');
  
  return 0;
  
}



Example :


Enter the number of disks: 4


Outout ::

 Move disk ---> 1 from A to B
 Move disk ---> 2 from A to C 
 Move disk ---> 1 from B to C
 Move disk ---> 3 from A to B 
 Move disk ---> 1 from C to A
 Move disk ---> 2 from C to B 
 Move disk ---> 1 from A to B
 Move disk ---> 4 from A to C 
 Move disk ---> 1 from B to C
 Move disk ---> 2 from B to A 
 Move disk ---> 1 from C to A
 Move disk ---> 3 from B to C 
 Move disk ---> 1 from A to B
 Move disk ---> 2 from A to C 
 Move disk ---> 1 from B to C



