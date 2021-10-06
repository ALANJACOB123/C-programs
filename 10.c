#include <stdio.h>

int fibo(int n)
{
    if(n==0 || n==1)
    return 0;
    if(n==2)
    return 1;
    return(fibo(n-1)+fibo(n-2));
}

int main(){
    int num;
    printf("Enter a Number :- ");
    scanf("%d", &num);
    printf("The %dth fibonacci number is %d",num, fibo(num));
}