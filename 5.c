#include <stdio.h>

int main()
{
    float num;
    int n,ld;
    printf("Enter The number :- ");
    scanf("%f", &num);
    n = num;
    ld= n%10;
    printf("The rightmost digit of the num is %d",ld);
}