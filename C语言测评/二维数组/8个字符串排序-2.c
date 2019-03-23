#include<stdio.h>
#include<string.h>
#define MAX 8
#define CMAX 10
/*
对输入的8个字符串(每个字符串长度不超过20)按照字典顺序进行排序并输出。不限定排序方法，不能使用goto语句。
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
