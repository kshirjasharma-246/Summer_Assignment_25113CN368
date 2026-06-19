#include <stdio.h>
int main()
{
  int r, c, arr1[100][100], arr2[100][100], sum[100][100];
  printf("Enter number of rows and columns for both matrices: ");
  scanf("%d%d",&r, &c);
  printf("Enter elements for 1st matrix: ");
  for(int i=0; i<r; i++)
   {
     for(int j=0; j<c; j++)
     {
      scanf("%d", &arr1[i][j]);
     }
    }
  printf("Enter elements for 2nd matrix: ");
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c; j++)
     {
      scanf("%d", &arr2[i][j]);
     }
  }
    for(int i=0; i<r; i++)
    {
      for(int j=0; j<c; j++)
       {
        sum[i][j]=arr1[i][j]+arr2[i][j];
       }
    }
  printf("Sum of 2 matrices is: ");
  for(int i=0; i<r; i++)
   {
     for(int j=0; j<c; j++)
     {
      printf("%d ", sum[i][j]);
     }
     printf("\n");
    }
    return 0;
}