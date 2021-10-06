#include <stdio.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2,dist,x,y;
    printf("Enter The numbers :- ");
    scanf("%d %d %d %d", &x1,&x2,&y1,&y2);
    x = (x2-x1);
    y = (y2-y1);
    dist = sqrt(x*x+y*y);
    printf("Distance = %d",dist);
}