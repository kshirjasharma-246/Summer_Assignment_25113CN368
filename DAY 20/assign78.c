#include<stdio.h>
int main()
{
  int row, col, count = 0, a[25][25], b[25][25];;
   printf("Enter number of rows and columns: ");
   scanf("%d %d", &row, &col);
   if(row!=col)
   {
     printf("Given matrix is a square matrix so non-Symmetric Matrix.");
   }
   printf("Enter matrix elements: ");
   for(int i= 0; i<row; i++)
    {
      for(int j=0; j<col; j++)
        {
          scanf("%d", &a[i][j]);
        }
    }
 
    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
        {
          b[j][i]=a[i][j];
        }
    }
 
    for(int i=0; i<row; i++)
    {
      for(int j=0; j<col; j++)
        {
          if(a[i][j]!=b[i][j])
            {
              count++;
              break;
            }
        }
    }
    if(count == 0)
    {
      printf("given matrix is a Symmetric Matrix ");
    }
    else
    {
      printf("given matrix is not a Symmetric Matrix ");
    }
     return 0;
  }