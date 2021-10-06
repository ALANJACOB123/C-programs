#include <stdio.h>

int main()
{
    int num, limit;
    printf("Enter The number :- ");
    scanf("%d", &num);
    printf("Enter The limit :- ");
    scanf("%d", &limit);
    printf("The Multiplication table is \n");
    for(int i=1; i<=limit; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
}