#include <stdio.h>
#define N 4

void multiply(int mat1[][N], int mat2[][N], int res[][N])
{
	int i, j, k;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			res[i][j] = 0;
			for (k = 0; k < N; k++)
				res[i][j] += mat1[i][k] * mat2[k][j];
		}
	}
}

void transpose(int A[][N], int B[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
}

int main()
{
	int mat1[N][N] = { { 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 },
					{ 4, 4, 4, 4 } };

	int mat2[N][N] = { { 1, 1, 1, 1 },
					{ 2, 2, 2, 2 },
					{ 3, 3, 3, 3 },
					{ 4, 4, 4, 4 } };

	int A[N][N]; // To store result
	int i, j, B[N][N];
	multiply(mat1, mat2, A);

	printf("Result matrix is \n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
 
    transpose(A, B);
 
    printf("Result matrix is \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
           printf("%d ", B[i][j]);
        printf("\n");
    }

	return 0;
}