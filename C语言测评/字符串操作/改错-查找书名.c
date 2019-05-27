#include <string.h>
#include <stdio.h>
int main()
{
    int i, findFlag;
    char x[13];
    char str[][13]={ "Pascal","Basic","Fortran", "Java", "Visual C", "Visual Basic" };

    printf("请输入一个字符串:");
    gets(x);

    i=0,findFlag=0;
    while (i<6 && !findFlag)
    {
        if (strcmp(x,str[i]) == 0)
        {
            findFlag = 1;
        }
         i++;
    }

    if (findFlag)
    {
       printf("%s\n", x);
    }else
    {
       printf("没找到!\n");
    }
    return 0;
}
