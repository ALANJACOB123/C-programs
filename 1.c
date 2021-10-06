#include <stdio.h>

int main()
{
    int num, sum=0, ld, rev=0;
    printf("Enter The number :-");
    scanf("%d",&num);
    while(num != 0)
    {
        ld = num%10;
        sum += ld;
        rev = rev*10 + ld;
        num/= 10;
    }
    printf("The sum of the number is %d\n",sum);
    printf("The reverse of the number is %d", rev);
}