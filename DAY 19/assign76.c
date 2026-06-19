#include <stdio.h>
int main()
{
  int n, arr[100][100], diag1sum=0, diag2sum=0 ;
  printf("Enter number of rows and columns: ");
  scanf("%d", &n);
  printf("Enter elements: ");
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
     {
      scanf("%d", &arr[i][j]);
     }
 }
  for(int i=0; i<n; i++)
    {
          diag1sum+=arr[i][i];
          diag2sum+=arr[i][n - i - 1];
     }

          printf("principal diagonal sum: %d \n", diag1sum);
          printf("secondary diagonal sum: %d", diag2sum);
     return 0;
}