#include<stdio.h>
int main()
{
    int  fx;
    printf("Enter a value:");

    scanf("%d",&fx);
    fx = 5* fx *fx-9*fx+7;
    printf("5%d *%d-9%d+7",fx);

    return 0;
}
