#include<stdio.h>
#define  N  15
void CaculateYH(int a[][N], int n);
void PrintYH(int a[][N], int n);
int main()
{
    int a[N][N] = {0}, n;
    printf("Input n(n<15):\n");
    scanf("%d", &n);
    CaculateYH(a, n);
    PrintYH(a, n);
    return 0;
}
void CaculateYH(int a[][N], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (i = 2; i < n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
}
void PrintYH(int a[][N], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}
