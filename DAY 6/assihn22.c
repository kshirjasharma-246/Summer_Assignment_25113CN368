#include<stdio.h>
int main ()
{
    int n, rem, dec=0, pow=1;
    printf("Enter the binary number:");
    scanf("%d",&n);
    while(n>0)
    {
        rem =n%10;
        dec=dec+rem*pow;
        n = n/10;
        pow = pow*2;
    }
    printf("%d is the decimal equivalent",dec);
    return 0;
}