#include <stdio.h>
int main()
{
  int r, c, arr1[100][100], arr2[100][100], sub[100][100];
  printf("Enter number of rows and columns: ");
  scanf("%d %d", &r, &c);
  printf("Enter elements in 1st matrix: ");
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c; j++)
    {
      scanf("%d",&arr1[i][j]);
    }
  }
  printf("Enter elements in 2nd matrix: ");
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
       sub[i][j]=arr1[i][j]-arr2[i][j];
     }
   }
  printf("Required result is: ");
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c; j++)
    {
      printf("%d ",sub[i][j]);
     }
    printf("\n");
  }
  return 0;
}