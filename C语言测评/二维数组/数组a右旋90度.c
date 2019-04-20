#include <stdio.h>
#define M 4
#define N 2
main()
{
    int a[M][N] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    int b[N][M], i, j;
    printf("Array a:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%4d", a[i][j]);
            b[j][M - 1 - i] = a[i][j];
        }
        printf("\n");
    }
    printf("Array b:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
}
