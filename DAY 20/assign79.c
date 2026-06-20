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
  printf("\n Row-wise Sums \n");
  for(int i=0; i<rows; i++)
   { int rowSum = 0; 
    for(int j=0; j<cols; j++) 
     {
       rowSum += mat[i][j];
     }
     printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }
 return 0;
}