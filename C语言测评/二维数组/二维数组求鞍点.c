#include <stdio.h>
#define N 10

void main()
{
    int i,j,row,col,maxRow[N],maxCol[N];
    int arr[N][N];
    int flag;

    printf("\n����������");
    scanf("%d",&row);
    printf("\n����������");
    scanf("%d",&col);

    //row=2,col=6;
    for(i=0;i<row;i++){
        printf("��%d�У�\n",i);
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // ��ӡ
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }

    // ��ÿ�������
    for(i=0;i<row;i++){
        maxRow[i] = arr[i][0];
        for(j=0;j<col;j++){
            if(arr[i][j] > maxRow[i]){
                maxRow[i] = arr[i][j];
            }
        }
    }

    // ��ÿ����С��
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
                printf("\n��%d�У���%d�е�%d�ǰ���\n",i,j,maxRow[i]);
                flag = 1;
            }
        }
    }

    if(flag == 0){
        printf("\n�������ް���!\n");
    }
}
