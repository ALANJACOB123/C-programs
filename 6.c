#include <stdio.h>

int main()
{
    int num,n, ld, rev = 0;
    printf("Enter The number :-");
    scanf("%d", &num);
    n = num;
    while (n != 0)
    {
        ld = n % 10;
        rev = rev * 10 + ld;
        n /= 10;
    }
    if(num == rev)
    {
        printf("Palindrome number");
    }
    else{
        printf("Not a Plindrome number");
    }
}