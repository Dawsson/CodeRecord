#include  <stdio.h>
#define ARR_SIZE 10
int main(void)
{
    int         a[ARR_SIZE][ARR_SIZE], i, j, n, sum = 0;
    long    product = 1;
    printf("Input n:");
    scanf("%d", &n) ;
    printf("Input %d*%d matrix:\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
                sum += a[i][j];
            if ((i == j || i + j == n - 1) && i % 2 == 0 && j % 2 == 0)
                product *= a[i][j];
        }
    }
    printf("sum = %d\nproduct = %ld\n", sum, product);
    return 0;
}
