/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int num,tot;

  printf("Calculate the total of numbers from 1 to n\n");
  printf("Enter the last no of rate starting from 1 :");
  scanf("%d",&num);

  tot=SumRange(num);
  printf("The total of num from 1 to %d:%d\n",num,tot);return 0;

  int SumRange(int num){
    int no;
    if(num==1){
      return(1);
      
    }
    else{
      no = num+SumRange(num-1);
    }
    return(no);
  }
}

