/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  int s1=0 , s2=0;
  float avg;
  printf("Enter the marks for the first subject: ");
  scanf("%d", &s1);

  printf("Enter the marks for the second subject: ");
  scanf("%d", &s2);

  avg = (s1+s2)/ 2.0;

  printf("Average of the marks :%.1f", avg);
  return 0;
}
