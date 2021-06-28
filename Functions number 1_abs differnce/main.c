/*C program to find difference of two numbers.*/

#include <stdio.h>
int dif(double x, double y){

    return x-y;
}

int main()
{

    int num1,num2,num3;

    printf("\n Enter first number: ");
    scanf("%d",& num1);
    printf("\n Enter second number: ");
    scanf("%d",& num2);

    num3=abs(dif(num1,num2));
    printf("\n Absolute Value is: %d \n", num3);
    printf("__________________________________________");
    return 0;
}
