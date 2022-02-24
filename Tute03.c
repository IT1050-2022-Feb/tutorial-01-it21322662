/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */
/*copmleted exercise 3*/
#include <stdio.h>
int main() {
  int i,n,sum = 0;
  
  printf("n->");
  scanf("%d",&n);
  
  for(i=1; i<=n;i++)
  {
    sum = sum+i;
  }
  
  printf("sum = %d",sum);
  
  return 0;
}
 printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum(int No1, int No){
   if(No1>No2){
      return No2;
   }
   esle{
      return No1;
   }
}
int maximum(int No1, int No2){
   if (No1>No2){
      return No1;
   }
   else{
      return No2;
   }
}
int multiply(int No1, int No2){
   return No1*No2;
}
  
  return 0;
}

