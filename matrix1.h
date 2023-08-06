// Function to do matrix multiplication only when row2==col1 , you have to enter the correct inputs
int **mat_multi(int *mat1, int row1, int col1, int *mat2, int row2, int col2)
{

    if (row2 == col1)
    {
        int **mat = (int **)malloc(row1 * sizeof(int));

        for (int i = 0; i < row1; i++)
        {
            mat[i] = (int *)malloc(col2 * sizeof(int));
        }
        int i1 = 0, i2 = 0, j1 = 0, j2 = 0;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                int element = 0;
                for (j1 = 0, j2 = 0; (j1 < col1) && (j2 < row2); j1++, j2++)
                {
                    int a = *(mat1 + i * col1 + j1);
                    int b = *(mat2 + j2 * col2 + j);
                    element += a * b;
                }

                mat[i][j] = element;
            }
        }

        return mat;
    }
    else
    {
        printf("Matrices can not be multiplied\n");
        return (int**)NULL;
    }
}