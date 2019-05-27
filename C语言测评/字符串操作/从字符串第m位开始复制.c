#include <stdio.h>
void cut(char *s, int x);    //定义剪切函数
int main()
{
    char str[20], *p=str;
    int m;
    printf("请输入一个字符串：\n");      //输入字符串
    gets(p);
    printf("从第几个字符开始复制？");  //输入要剪切开始的字符数
    scanf("%d", &m);
    cut(p, m);                            //调用剪切函数
    return 0;
}
//剪切函数
void cut(char *s, int x)
{
    char *i, cc[20], *j=cc;
    for (i=s+x-1; *j++=*i++;);
    printf("复制结果为：%s\n", cc);
}
