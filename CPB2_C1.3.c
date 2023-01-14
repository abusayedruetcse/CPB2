#include<stdio.h>
int main()
{
    double num1;
    double num2;
    double summation;

    scanf("%lf", &num1);
    scanf("%lf", &num2);

    summation = num1+num2;
    printf("Sum: %lf", summation);

    return 0;
}

