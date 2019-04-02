#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int data;
    struct stack *next;
}                     STACK;
STACK *head, *pr;
int nodeNum = 0;                           
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

STACK *CreateNode(int num)
{
    STACK *p;
    p = (STACK *)malloc(sizeof(STACK));
    if (p == NULL)
    {
        printf("No enough memory!\n");
        exit(0);
    }
    p->next = NULL;              
    p->data = num;                   
    return p;
}

STACK *PushStack(int num)
{
    if (nodeNum == 0) 
    {
        head = CreateNode(num);
        pr = head;
        nodeNum++;  
    }
    else             
    {
        pr->next = CreateNode(num);
        pr = pr->next;
        nodeNum++;  
    }
    return pr;
}

int PopStack(void)
{
    STACK *p = head;
    int result;
    for (;;)
    {
        if (p->next == NULL)     
        {
            break;
        }
        else
        {
            pr = p;             
            p = p->next;
            nodeNum--;         
        }
    }
    pr->next = NULL;   
    result = p->data;
    free(p);
    return result;
}
