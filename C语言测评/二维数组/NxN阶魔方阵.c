#include <stdio.h>

int main()
{
    int matrix[20][20];
    int row, col;
    int i, m, n;

    int N;
    printf("请输入n（0<n<=15，n是奇数）：");
    scanf("%d",&N);
    printf("矩阵阶数是：%d\n",N);
    //0. 初始化数组元素全为0
    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            matrix[row][col] = 0;
        }
    }

    //1. 定位1的初始位置
    row = 0;
    col = (N - 1) / 2;
    matrix[row][col] = 1;

    //2. 将2..N*N每个数插入到相应位置
    for (i = 2; i <= N * N; i++)
    {
        int r, c;

        r = row;
        c = col;
        row = (row + N - 1) % N;   //行列坐标的计算，算法难点
        col = (col + N + 1) % N;
        if (0 == matrix[row][col])  //该处有数则冲突，处理到前一个数的下一列
            matrix[row][col] = i;   //无冲突则插入该数。
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

