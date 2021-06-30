#include <stdio.h>
int main()
{
    int num, num1, num2;
    int sum, sub, mult;
    float div;


    printf("Input 1st integer: ");
    scanf("%d", &num1);

    printf("Input 2nd integer: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;


    printf("ADD: %d\n", sum);
    printf("SUB: %d\n", sub);
    printf("MUL: %d\n", mult);
    printf("DIV: %f\n", div);


    return 0;
}
