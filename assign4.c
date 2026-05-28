#include<stdio.h>
int main()
{ 
  int n, d=0, c=0;
 printf("enter a number");
 scanf("%d", &n);
 for(int i=0; i<n;i++)
 {
    d=n%10;
    n=n/10;
    c++;
}
 printf("count%d", c);
return 0;

}