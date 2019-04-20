#include <stdio.h>
#define  ROW 2
#define  COL 3
int main()
{
    int  a[ROW][COL] = {1,4,6,8,10,12};
    int  i, j, temp;
    for (i=0; i<ROW; i++)
    {
        temp = a[i][COL-1];                 // 将当前行最后一列暂存
        for (j=COL-2; j>=0; j--)
        {
            a[i][j+1] = a[i][j];          // 将当前行其他列后移
        }
        a[i][0] = temp;                      // 将暂存数据赋予当前行 0 列
    }
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
