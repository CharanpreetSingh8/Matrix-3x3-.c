#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i,j;
    
    for(i = 0; i<3 ; i++)
    {
        for(j = 0; j<3; j++)
        {
            printf("Enter value for [%d] [%d]: ", i ,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("The matrix formed by the value is: \n");
    for(i=0; i<3; i++) 
    {
      for(j=0; j<3 ;j++) 
      {
        printf("%d ", *(&matrix[i][j]));
        if(j == 2)
        {
            printf("\n");
        }
      }
    }

    int q,w,e;
    q = matrix[0][0];
    w = matrix[1][1];
    e = matrix[2][2];

    printf("The sum of the diagonal elements (%d,%d,%d) of the above matrix:\n%d", q, w, e, q+w+e);
    return 0;
}
