#include <stdio.h>
/* User defined function sum that has two positive int
 * parameters. The function adds these numbers and
 * return the result of addition.
 */
int sum(int x, int y){

   return x+y;
}
int main()
{
   int num1, num2, num3;
   printf("Enter first positive number: ");
   scanf("%d", &num1);
   printf("Enter second positive number: ");
   scanf("%d", &num2);

   //Calling the function
   num3 = sum(num1, num2);
   printf("Sum of the entered numbers: %d", num3);
   return 0;
}
