#include <stdio.h>
void cut(char *s, int x);    //������к���
int main()
{
    char str[20], *p=str;
    int m;
    printf("������һ���ַ�����\n");      //�����ַ���
    gets(p);
    printf("�ӵڼ����ַ���ʼ���ƣ�");  //����Ҫ���п�ʼ���ַ���
    scanf("%d", &m);
    cut(p, m);                            //���ü��к���
    return 0;
}
//���к���
void cut(char *s, int x)
{
    char *i, cc[20], *j=cc;
    for (i=s+x-1; *j++=*i++;);
    printf("���ƽ��Ϊ��%s\n", cc);
}
