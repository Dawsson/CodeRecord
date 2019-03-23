#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const char shuzi[10][4] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"};
const char weishu[5][4] = {"十", "百", "千", "万", "亿"};

void read(char *str);

int main()
{
    char str[11] = {'0'};
    scanf("%s", str + 1);
    read(str + 1);
    return 0;
}

void read(char *str)
{
    if (strlen(str) == 0)
        return;
    else
    {
        switch (str[0])
        {
        case '0':
            if (str[1] != '0' && strlen(str) >= 2)
                printf("%s", shuzi[0]);
            break;
        case '1':
            if (strlen(str) != 2 && strlen(str) != 6)
                printf("%s", shuzi[1]);
            else if (*(str - 1) != '0')
                printf("%s", shuzi[1]);
            break;
        case '2':
            printf("%s", shuzi[2]);
            break;
        case '3':
            printf("%s", shuzi[3]);
            break;
        case '4':
            printf("%s", shuzi[4]);
            break;
        case '5':
            printf("%s", shuzi[5]);
            break;
        case '6':
            printf("%s", shuzi[6]);
            break;
        case '7':
            printf("%s", shuzi[7]);
            break;
        case '8':
            printf("%s", shuzi[8]);
            break;
        case '9':
            printf("%s", shuzi[9]);
            break;
        default:
            return;
        }
        switch (strlen(str))
        {
        case 9:
            printf("%s", weishu[4]);
            break;
        case 8:
            if (str[0] != '0')
                printf("%s", weishu[2]);
            break;
        case 7:
            if (str[0] != '0')
                printf("%s", weishu[1]);
            break;
        case 6:
            if (str[0] != '0')
                printf("%s", weishu[0]);
            break;
        case 5:
            if (str[0] != '0')
            printf("%s", weishu[3]);
            break;
        case 4:
            if (str[0] != '0')
                printf("%s", weishu[2]);
            break;
        case 3:
            if (str[0] != '0')
                printf("%s", weishu[1]);
            break;
        case 2:
            if (str[0] != '0')
                printf("%s", weishu[0]);
            break;
        case 1:
            break;
        default:
            return;
        }
        read(++str);
    }
}
