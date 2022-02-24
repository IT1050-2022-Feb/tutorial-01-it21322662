/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/
/*competed exercise 4*/
#include <stdio.h>

int main() {
    int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
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
