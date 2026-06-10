#include<stdio.h>
int findmax(int x, int y);
int main()
{
 int x, y, max=0;
    printf("Enter two numbers:");
    scanf("%d%d",&x, &y);
    max= findmax(x,y);
    printf("Maximum of given numbers is %d", max);
    return 0;
}

int findmax(int x, int y)
{
 return (x>y)? x:y;
}