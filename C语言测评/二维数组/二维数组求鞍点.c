#include <stdio.h>
#define N 10

void main()
{
    int i,j,row,col,maxRow[N],maxCol[N];
    int arr[N][N];
    int flag;

    printf("\n输入行数：");
    scanf("%d",&row);
    printf("\n输入列数：");
    scanf("%d",&col);

    //row=2,col=6;
    for(i=0;i<row;i++){
        printf("第%d行？\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // 打印
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }

    // 求每行最大数
    for(i=0;i<row;i++){
        maxRow[i] = arr[i][0];
        for(j=0;j<col;j++){
            if(arr[i][j] > maxRow[i]){
                maxRow[i] = arr[i][j];
            }
        }
    }

    // 求每列最小数
    for(j=0;j<col;j++){
        maxCol[j] = arr[0][j];
        for(i=0;i<row;i++){
            if(arr[i][j] < maxCol[j]){
                maxCol[j] = arr[i][j];
            }
        }
    }

    flag = 0;
   for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(maxRow[i] == maxCol[j]){
                printf("\n第%d行，第%d列的%d是鞍点\n",i,j,maxRow[i]);
                flag = 1;
            }
        }
    }

    if(flag == 0){
        printf("\n矩阵中无鞍点!\n");
    }
}
