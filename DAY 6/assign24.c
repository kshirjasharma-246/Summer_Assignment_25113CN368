#include<stdio.h>
int main()
{
    int i, base, n,c=1;
    printf("Enter base and exponential value");
    scanf("%d%d",&base,&n);
    for(i=1; i<=n; i++)               
    {
     c=c*base;
    }
    printf("The required answer will be:%d",c);
    return 0;
}