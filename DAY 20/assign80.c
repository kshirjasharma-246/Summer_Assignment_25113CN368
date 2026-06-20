#include <stdio.h>
int main()
{
  int rows, cols, mat[25][25];
  printf("Enter number of rows and columns: ");
  scanf("%d%d", &rows, &cols);
  printf("Enter elements of matrix: ");
  for(int i=0; i<rows; i++)
  {
    for(int j=0; j <cols; j++) 
    {
      scanf("%d", &mat[i][j]);
     }
  }
  printf("\n Column-wise Sums \n");
  for(int j=0; j<cols; j++)
   { int colSum = 0; 
    for(int i=0; i<rows; i++) 
     {
       colSum += mat[i][j];
     }
     printf("Sum of Column %d = %d\n", j + 1, colSum);
    }
 return 0;
}