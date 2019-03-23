#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int data;
    struct stack *next;
}                     STACK;
STACK *head, *pr;
int nodeNum = 0;                            /* 堆栈节点数寄存器 */
STACK *CreateNode(int num);
STACK *PushStack(int num);
int PopStack(void);
int main()
{
    int pushNum[5] , popNum[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("请输入要压栈的整数：");
        scanf("%d",&pushNum[i]);
        PushStack(pushNum[i]);
        printf("Push %dth Data:%d\n", i + 1, pushNum[i]);
    }
    for (i = 0; i < 5; i++)
    {
        popNum[i] = PopStack();
        printf("Pop %dth Data:%d\n", 5 - i, popNum[i]);
    }
    return 0;
}
/* 函数功能：生成一个新的节点，并为该节点赋初值，返回指向新的节点的指针 */
STACK *CreateNode(int num)
{
    STACK *p;
    p = (STACK *)malloc(sizeof(STACK));
    if (p == NULL)
    {
        printf("No enough memory!\n");
        exit(0);
    }
    p->next = NULL;              /* 为新建的节点指针域赋空指针 */
    p->data = num;                   /* 为新建的节点数据区赋值 */
    return p;
}
/*  函数功能：将整型变量num的值压入堆栈，返回指向链表新节点的指针 */
STACK *PushStack(int num)
{
    if (nodeNum == 0) /* 若为首节点，则保留该节点地址在head中*/
    {
        head = CreateNode(num);
        pr = head;
        nodeNum++;  /* 堆栈节点数寄存器+1 */
    }
    else             /* 若不是首节点，则将新建节点连到链表的结尾处 */
    {
        pr->next = CreateNode(num);
        pr = pr->next;
        nodeNum++;  /* 堆栈节点数寄存器+1 */
    }
    return pr;
}
/*  函数功能：将当前栈顶的数据弹出堆栈，返回从堆栈中弹出的数据 */
int PopStack(void)
{
    STACK *p = head;
    int result;
    for (;;)
    {
        if (p->next == NULL)     /* 查找最后一个节点 */
        {
            break;
        }
        else
        {
            pr = p;             /* 记录最后一个节点的前一个节点的地址 */
            p = p->next;
            nodeNum--;          /* 堆栈节点数寄存器-1 */
        }
    }
    pr->next = NULL;          /* 将末节点的前一个节点置成末节点 */
    result = p->data;
    free(p);
    return result;
}
