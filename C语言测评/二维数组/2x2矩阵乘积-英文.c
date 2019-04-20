#include <stdio.h>
#define  ROW 2
#define  COL 3
main()
{
    int a[ROW][COL], b[COL][ROW], c[ROW][ROW], i, j,k;

    printf("Input 2*3 matrix a:\n");
    for (i=0; i<ROW ;i++)//1
    {
        for (j=0; j<COL; j++)//1
        {
            scanf("%d", &a[i][j]);//1
        }
    }
    printf("Input 3*2 matrix b:\n");
    for (i=0; i<COL; i++)//1
    {
        for (j=0; j<ROW; j++)//1
        {
            scanf("%d",  &b[i][j]);//1
        }
    }
    for (i=0; i<ROW; i++)//1
    {
        for (j=0; j<ROW; j++)//1
        {
            c[i][j] =   0 ;//1
            for (k=0; k<COL; k++)//1
            {
                c[i][j] = c[i][j]+a[i][k]*b[k][j] ;//2
            }
        }
    }
    printf("Results:\n");
    for (i=0; i<ROW; i++)//1
    {
        for (j=0; j<ROW; j++) //1
        {
            printf("%6d", c[i][j]);//1
        }
        printf("\n") ;//1
    }
}
