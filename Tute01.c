/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float sub1,sub2;
  float avg;

  printf("enter marks of sub1 :");
  scanf("%f",&sub1);

  printf("enter marks of sub2 :");
  scanf("%f",&sub2);

     avg=(sub1+sub2)/2;

  printf("average is : %.2f",avg);

  return 0;
}

