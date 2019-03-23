#include <stdio.h>
#include <stdlib.h>

#define N 6

struct LNode
{
    int data;
    struct LNode *next;
}                        ;

struct LNode* create_rear(int a[], int n);
void output(struct LNode *h);

int main(int argc, char *argv[])
{
    /*�ٶ���һ�����顢ͷָ��*/
    int a[N], i;
    struct LNode* head;

    /*����������Ԫ�ص�ֵ*/
    printf("��������%d��Ԫ�ص�ֵ��\n", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    /*�۴�������head,�����ֵ����Ϊ����aԪ�ص�ֵ*/
    head = create_rear(a, N);
    /*���������head*/
    printf("�������������������Ϊ��");
    output(head);

    return 0;
}

struct LNode* create_rear(int a[], int n)
{
    /*�½�һ������h��ÿ��������β��뵽��β���������ͷָ�뷵�� */
    struct LNode *h = NULL;
    struct LNode *s, *r; /*��sָ��Ҫ�����㣬rָ�������β���*/
    int i;

    for (i = 0; i < n; i++)
    {
        s = (struct LNode *)malloc(sizeof(struct LNode));
        s->data = a[i];
        s->next = NULL;
        if (h == NULL)
            h = s;       /*�������Ϊ�գ���ͷָ��hָ��s */
        else
            r->next = s; /*����s���ӵ�β���r֮��     */
        r = s;           /*��rָ��β���               */
    }
    return h;  /*���������ͷָ��*/
}

void output(struct LNode *h)
{
    /*������h�ĸ����������������������������������*/
    struct LNode *p = h;/*�ӵ�һ����㿪ʼ����p����ָ��������*/
    while (p)
    {
        /*ֻҪp��һ���ǿս�㣬�������������Ȼ��p����*/
        printf("%d ", p->data);
        p = p->next;  //��p����
    }


}
