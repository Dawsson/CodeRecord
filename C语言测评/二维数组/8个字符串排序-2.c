#include<stdio.h>
#include<string.h>
#define MAX 8
#define CMAX 10
/*
�������8���ַ���(ÿ���ַ������Ȳ�����20)�����ֵ�˳�����������������޶����򷽷�������ʹ��goto��䡣
*/
int main()
{
    char a[MAX][CMAX], term[CMAX];
    int i, j;
    for (i = 0; i < 8; i++)
    {
        scanf("%s", a[i]);
    }

    for (i = 0; i < 8 - 1; i++)
    {
        for (j = 1; j < 8 - i; j++)
        {
            if (strcmp(a[j], a[j - 1]) < 0)
            {
                strcpy(term, a[j]);
                strcpy(a[j], a[j - 1]);
                strcpy(a[j - 1], term);
            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        printf("%s\n", a[i]);
    }
    return 0;
}
