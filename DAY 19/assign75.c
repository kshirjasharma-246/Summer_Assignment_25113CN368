#include <stdio.h>
int main()
{
  int r, c, arr1[100][100], trans[100][100];
  printf("Enter number of rows and columns: ");
  scanf("%d%d", &r, &c);
  printf("Enter elements: ");
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }
  for(int i=0; i<r; i++)
  {
   for(int j=0; j<c; j++)
    {
      trans[j][i]=arr1[i][j];
    }
  }
  printf("Transpose of matrices is ");
  for(int i=0; i<c; i++)
    {
      for(int j=0; j<r; j++)
      {
         printf("%d ",trans[i][j]);
      }
     printf("\n");
    }
 return 0;
}
