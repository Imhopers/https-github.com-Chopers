#include<stdio.h>

int main(){

    int num;

  printf("Input integer");
  scanf("%d",&num);

    switch(num > 0)
    {
    case 1:
        printf("the integer is a positive number", num);
    break;

    case 0:

    switch (num < 0)
    {
    case 1:
        printf("the integer is a negative number", num);
    break;

    case 2:
         printf(" the integer is zero", num);
    break;
    default:
        printf("the input data is invalid");
    }
        }

}
