#include <stdio.h>
int main()
{
    int score[4][4];
    int zhang, wang, li, last, i, j;
    score[1][1]=7;  /*score[1]����ż��������ӵķ���*/
    score[2][1]=8;  /*score[2]��������������ӵķ���*/
    score[3][1]=9;  /*score[3]�������������ӵķ���*/

    for(zhang=4; zhang<6; zhang++)  /*�żҺ�����4��6�ֶο���ȡֵ�ķ���Ϊ4,5������ȡ6*/
        for(wang=4; wang<7; wang++)  /*���Һ�����4��6�ֶο���ȡֵ�ķ���Ϊ4,5,6*/
            for(li=4; li<7; li++)  /*��Һ�����4��6�ֶο���ȡֵ�ķ���Ϊ4,5,6*/
                if(zhang!=wang && li!=zhang && li!=wang
                   && 15-zhang-score[1][1]!=15-wang-score[2][1]  /*9���������β����ڲ��е����*/
                   && 15-zhang-score[1][1]!=15-li-score[3][1]
                   && 15-wang-score[2][1]!=15-li-score[3][1])
                {
                    score[1][2]=zhang;  /*����������Ӧ������Ԫ��*/
                    score[1][3]=15-zhang-7;
                    score[2][2]=wang;
                    score[2][3]=15-wang-8;
                    score[3][2]=li;
                    score[3][3]=15-li-9;
                }

    printf("array score:\n");  /*��ӡ��ά����score��������Һ��ӵķ���*/
    for(last=0, i=1; i<=3; i++)
        for(j=1; j<=3; j++)
        {
            printf("%d  ", score[i][j]);
            if(j == 3)
                printf("\n");  /*ÿ��������ֵ����*/
            if(score[i][j] == 1)
                last=i;  /*��¼���һ�����������Եļ�ͥ*/
        }
    /*������һ���������Եļ�ͥ*/
    if(last == 1)
        printf("The last one arrived to end is a child from family Zhang.\n");
    else if(last == 2)
        printf("The last one arrived to end is a child from family Wang.\n");
    else
        printf("The last one arrived to end is a child from family Li.\n");

    return 0;
}
