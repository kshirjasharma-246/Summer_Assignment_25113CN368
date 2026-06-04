#include<stdio.h>
int main()
{
    int rem, n, bin=0, pow=1;
    printf("Enter the decimal number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%2;
        bin=bin+rem*pow;
        n = n/2;
        pow = pow*10;        
        
    }
    printf("%d is the binary equivalent",bin);
    return 0;

    
}