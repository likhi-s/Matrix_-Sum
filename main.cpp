
#include <stdio.h>

int main()
{
    int rows, columns;
     //int A[rows][columns], B[rows][columns], C[rows][columns];

    int i, j;
    int k[2][2];
    printf("%d\n",sizeof (k));



    printf("Enter number of Rows:\n");
    scanf("%d", &rows);
    printf("Enter number of Columns:\n");
    scanf("%d", &columns);
    int A[rows][columns], B[rows][columns], C[rows][columns];
    int l,m,n;
    //int A[5][5],B[5][5],C[5][5];

 printf("%d**\n",sizeof (A));


    printf("Enter A matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            //printf("A[%d][%d]: ", i, j);

            scanf("%d", &A[i][j]);
            printf("A[%d][%d]: ", i, j);
        }
    }

    printf("Enter B matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            //printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
            printf("B[%d][%d]: ", i, j);
        }
    }
    int k1=*(&A+1)-A;
    printf("******%d\n",k1);

    printf("The sum of given matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", C[i][j]= A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
