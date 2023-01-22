
#include<stdio.h>
int f(int n)
{
    if(n == 0)
        return 0;
    int val;
    val =  n*n+f(n-1);
    return val;
}
int main()
{
    int n;
    scanf("%d", &n);
    int value;
    value = f(n);
    printf("Result= %d",value);
    return 0;
}
