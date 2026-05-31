#include<stdio.h>
#include<math.h>
int main()
{
    int n, k, num, c=0, digit=0, d = 0, a,b;
 double sum = 0.0;
 printf("Enter upper and lower limit for which armstrong number needed");
    scanf("%d%d", &a, &b);
     for(int n=a; n<b; n++)
     { 
       k = n;
       num = n;
       while (n!= 0)
        { 
          n = n / 10;
           c++;
        }
      while(num > 0)
      { 
        digit= num%10;
        sum=sum + (pow(digit, c));
        num=num/10;
      }
    }
      if ((int)sum == k) 
    {
        printf("%d is an Armstrong number", k);
    }
     return 0;
    }