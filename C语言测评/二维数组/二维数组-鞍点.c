#include <stdio.h>

#define     N   10
#define     M   10

/*
�ҳ�һ����ά�����еİ��㣬����λ���ϵ�Ԫ���ڸ�������ڸ�������С��Ҳ����û�а��㡣
*/
int main()
{
    int i, j, k, m, n, flag1, flag2, a[N][M], max, maxi, maxj;

    printf("\n����������");
    scanf("%d", &n);
    printf("\n����������");
    scanf("%d", &m);

    for (i = 0; i < n; i++)
    {
        printf("��%d�У�\n", i);
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    flag2 = 0;
    for (i = 0; i < n; i++)
    {
        max = a[i][0];
        for (j = 0; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                maxj = j;
            }
        }
        for (k = 0, flag1 = 1; k < n && flag1; k++)
        {
            if (max > a[k][maxj])
            {
                flag1 = 0;
            }
        }
        if (flag1)
        {
            printf("\n��%d�У���%d�е�%d�ǰ���\n", i, maxj, max);
            flag2 = 1;
        }
    }
    if (!flag2)
    {
        printf("\n�������ް���!\n");
    }

    return 0;
}
