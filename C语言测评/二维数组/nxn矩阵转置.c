#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[6][6];
    int i, j, n, tep;

    printf("please input n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = i * n + j + 1;
        }
    }
    printf("ת��ǰ��\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    // ת�ò�����
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i < j)
            {
                tep = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = tep;
            }
        }
    }
    printf("ת�ú�\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
