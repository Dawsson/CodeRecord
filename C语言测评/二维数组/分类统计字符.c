#include <stdio.h>

int main()
{
    int i, j, uppn, lown, dign, span, othn;
    char text[3][80];

    uppn = lown = dign = span = othn = 0;

    for (i = 0; i < 3; i++)
    {
        printf("\n请输入第%d行：\n", i);
        gets(text[i]);
        for (j = 0; j < 80 && text[i][j] != '\0'; j++)
        {
            if (text[i][j] >= 'A' && text[i][j] <= 'Z')
            {
                uppn += 1;
            }
            else if (text[i][j] >= 'a' && text[i][j] <= 'z')
            {
                lown += 1;
            }
            else if (text[i][j] >= '0' && text[i][j] <= '9')
            {
                dign += 1;
            }
            else if (text[i][j] == ' ')
            {
                span += 1;
            }
            else
            {
                othn += 1;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", text[i]);
    }
    printf("大写字母数：%d\n", uppn);
    printf("小写字母数：%d\n", lown);
    printf("数字个数  ：%d\n", dign);
    printf("空格个数  ：%d\n", span);
    printf("其它字符  ：%d\n", othn);

    return 0;
}
