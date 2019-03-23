#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
将一个字符串插入到另一个字符串中首次出现某字符的指定位置
*/
int main()
{
    int i = 0, j = 0, n, len;
    char str1[200] = {'\0'};
    char str2[100];
    char strtem[100];
    char ch;
    printf("Input source string 1:\n");
    gets(str1);
    printf("Input inserted string 2:\n");
    gets(str2);
    printf("Input a letter to locate the index:\n");
    scanf(" %c", &ch);
    len = strlen(str1);
    while (str1[i] != '\0')
    {
        if (str1[i] == ch)
        {
            n = i;
            break;
        }
        i++;
    }
    if (i != len)
    {
        for (i = n; str1[i] != '\0'; j++, i++)
        {
            strtem[j] = str1[i];
            str1[i] = '\0';
        }
        strtem[j] = '\0';
        strcat(str1, str2);
        strcat(str1, strtem);
        printf("The new string is:%s", str1);
    }
    else
    {
        printf("Not found!");
    }

    return 0;
}
