#include <stdio.h>

int main()
{
    int matrix[20][20];
    int row, col;
    int i, m, n;

    int N;
    printf("������n��0<n<=15��n����������");
    scanf("%d",&N);
    printf("��������ǣ�%d\n",N);
    //0. ��ʼ������Ԫ��ȫΪ0
    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            matrix[row][col] = 0;
        }
    }

    //1. ��λ1�ĳ�ʼλ��
    row = 0;
    col = (N - 1) / 2;
    matrix[row][col] = 1;

    //2. ��2..N*Nÿ�������뵽��Ӧλ��
    for (i = 2; i <= N * N; i++)
    {
        int r, c;

        r = row;
        c = col;
        row = (row + N - 1) % N;   //��������ļ��㣬�㷨�ѵ�
        col = (col + N + 1) % N;
        if (0 == matrix[row][col])  //�ô��������ͻ������ǰһ��������һ��
            matrix[row][col] = i;   //�޳�ͻ����������
        else
        {
            r = (r + 1) % N;
            matrix[r][c] = i;
            row = r;
            col = c;
        }
    }


    for (m = 0; m < N; m++)
    {
        for (n = 0; n < N; n++)
            printf("%3d", matrix[m][n]);
        printf("\n");
    }

    return 0;
}

