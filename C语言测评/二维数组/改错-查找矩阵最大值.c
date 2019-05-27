#include <stdio.h>
int FindMax(int x[3][4],int *pRow,int *pCol);
main()
{
    int a[3][4], max, i, j, row, col;

    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            scanf("%d",&a[i][j]);
        }
    }
    max = FindMax(a,&row,&col);
    printf("max=%d,row=%d,col=%d\n",max,row,col);
}
int FindMax(int x[3][4],int *pRow,int *pCol){
    int max, i, j;
    max = x[0][0];
    for (i=0; i<3; i++){
        for (j=0; j<4; j++)
        {
            if (x[i][j] > max)
            {
                max = x[i][j];
                *pRow = i;
                *pCol = j;
            }
        }
    }
    return max;
}
