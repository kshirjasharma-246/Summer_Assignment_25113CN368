#include<stdio.h>
int main()
{
  int mat1[25][25], r1, c1, mat2[25][25], r2, c2, mat3[25][25], sum=0;
  printf("enter row and column of 1st matrix: ");
  scanf("%d%d", &r1, &c1);
  printf("enter row and column of 2nd matrix: ");
  scanf("%d%d", &r2, &c2);

  if(c1!=r2)
  {
    printf("Multiplication is not possible ");
  }
  else
  {
    printf("enter elements for 1st matrix: ");
    for(int i=0; i<r1; i++)
    {
      for(int j=0; j<c1; j++)
      {
        scanf("%d", &mat1[i][j]);
      }
    }
    printf("enter elements for 2nd matrix: ");
    for(int i=0; i<r2; i++)
    {
      for(int j=0; j<c2; j++)
       {
        scanf("%d", &mat2[i][j]);
       }
    }
    for(int i=0; i<r1; i++)
    {
      for(int j=0; j<c2; j++)
      {
        for(int k=0; k<c1; k++)
         {
           sum+=mat1[i][k]*mat2[k][j];
         }
         mat3[i][j]=sum;
         sum=0;
      }
    }
    printf("Multiplication: ");
    for(int i=0; i<r1; i++)
    {
      for(int j=0; j<c2; j++)
      {
        printf("%d", mat3[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
  }