#include <stdio.h>
#define  ROW 2
#define  COL 3
int main()
{
    int  a[ROW][COL] = {1,4,6,8,10,12};
    int  i, j, temp;
    for (i=0; i<ROW; i++)
    {
        temp = a[i][COL-1];                 // ����ǰ�����һ���ݴ�
        for (j=COL-2; j>=0; j--)
        {
            a[i][j+1] = a[i][j];          // ����ǰ�������к���
        }
        a[i][0] = temp;                      // ���ݴ����ݸ��赱ǰ�� 0 ��
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
