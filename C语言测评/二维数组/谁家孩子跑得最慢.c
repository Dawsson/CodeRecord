#include <stdio.h>
int main()
{
    int score[4][4];
    int zhang, wang, li, last, i, j;
    score[1][1]=7;  /*score[1]存放张家三个孩子的分数*/
    score[2][1]=8;  /*score[2]存放王家三个孩子的分数*/
    score[3][1]=9;  /*score[3]存放李家三个孩子的分数*/

    for(zhang=4; zhang<6; zhang++)  /*张家孩子在4到6分段可能取值的分数为4,5，不能取6*/
        for(wang=4; wang<7; wang++)  /*王家孩子在4到6分段可能取值的分数为4,5,6*/
            for(li=4; li<7; li++)  /*李家孩子在4到6分段可能取值的分数为4,5,6*/
                if(zhang!=wang && li!=zhang && li!=wang
                   && 15-zhang-score[1][1]!=15-wang-score[2][1]  /*9个孩子名次不存在并列的情况*/
                   && 15-zhang-score[1][1]!=15-li-score[3][1]
                   && 15-wang-score[2][1]!=15-li-score[3][1])
                {
                    score[1][2]=zhang;  /*将结果存入对应的数组元素*/
                    score[1][3]=15-zhang-7;
                    score[2][2]=wang;
                    score[2][3]=15-wang-8;
                    score[3][2]=li;
                    score[3][3]=15-li-9;
                }

    printf("array score:\n");  /*打印二维数组score，输出各家孩子的分数*/
    for(last=0, i=1; i<=3; i++)
        for(j=1; j<=3; j++)
        {
            printf("%d  ", score[i][j]);
            if(j == 3)
                printf("\n");  /*每输入三个值换行*/
            if(score[i][j] == 1)
                last=i;  /*记录最后一名孩子所来自的家庭*/
        }
    /*输出最后一名孩子来自的家庭*/
    if(last == 1)
        printf("The last one arrived to end is a child from family Zhang.\n");
    else if(last == 2)
        printf("The last one arrived to end is a child from family Wang.\n");
    else
        printf("The last one arrived to end is a child from family Li.\n");

    return 0;
}
