/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,tot
  float avg;
  
  printf("Enter mark1 :");
  scanf("%d",&mark1);
  printf("Enter mark2 :");
  scanf("%d",&mark2);

  tot=mark1 +mark2;
  avg=tot/2;

  printf("The Total is :%d",tot);
  printf("The average is :%f",avg);
  
  return 0;
}

