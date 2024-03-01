#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows, cols;
    printf("Enter the order of matrix(rows,cols)\n");
    scanf("%d", &rows);
    scanf("%d", &cols);
    int mat[rows][cols];
    printf("Enter the elements of the matrix :\n ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Given matrix is : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix is : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}