#include <stdio.h>
int main()
{
    int num, f=1;
    printf("Enter The number :- ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++)
    {
        f =f*i;
    }
    printf("the factorial of number is %d",f);
}