#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
    int a[N][N];
    int n,i,j,sum,old;
    printf("���������Ľ�����<=10����");
    scanf("%d", &n);
    printf("���������\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d]��",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    old=0;
    for(i=0;i<n;i++)
    {
        old+=a[0][i];
    }
    for (i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
    }
    if(sum!=old)
    {
        printf("�þ�����ħ����\n" );
        exit(0);
    }
       for (i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[j][i];
        }
    }
    if(sum!=old)
    {
        printf("�þ�����ħ����\n" );
        exit(0);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][i];
    }
    if(sum!=old)
    {
       printf("�þ�����ħ����\n" );
        exit(0);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][n-i-1];
    }
     if(sum!=old)
    {
       printf("�þ�����ħ����\n" );
        exit(0);
    }
    printf("�þ���Ϊħ������");
}
