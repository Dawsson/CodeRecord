#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INIT_SIZE 20  /* 存储空间的的初始分配量*/
#define INCREMENT_SIZE 10

/* 状态代码常量 */
#define N 6
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status; /* 函数的类型，其值为函数结果状态代码*/
typedef int Boolean; /* Boolean是布尔类型,其值是TRUE或FALSE */

typedef int ElemType;
typedef struct SqLinkList{
     ElemType *elem;
     int length;
     int listsize;
}SqLinkList;

/* 初始条件：
   操作结果：构造一个空的线性表list
   */
Status InitList(SqLinkList *plist){

     (*plist).elem = (ElemType *)malloc(INIT_SIZE*sizeof(ElemType));
     if(!(*plist).elem){
          exit(ERROR); /* 存储分配失败*/
     }

     (*plist).length = N; /* 空表长度为0*/
     (*plist).listsize = INIT_SIZE; /* 初始存储容量*/
     return OK;
} /* end InitList*/

Status ListInsert(SqLinkList *plist,int i,ElemType e){

     ElemType *newbase,*insLocate,*nowLocate; /*新基址、元素插入位置*/

     /* 当 i 不在范围内时*/
     if(i<1 || i > plist->length+1){
          return ERROR;
     }

     /* 顺序线性表已满,增加分配*/
     if(plist->length >= plist->listsize){
          newbase = (ElemType *)realloc(plist->elem,
                                   (plist->listsize + INCREMENT_SIZE)*sizeof(ElemType));

          if(!newbase){
               exit(ERROR); /* 存储分配失败*/
          }
          plist->elem = newbase; /* 新基址*/
          plist->listsize += INCREMENT_SIZE; /* 增加存储容量*/
     }

     insLocate = &(plist->elem[i-1]);

     /* 将要插入位置后的数据元素向后移动一位*/
     for(nowLocate = &(plist->elem[plist->length - 1]); nowLocate>=insLocate; --nowLocate){
          *(nowLocate+1) = *nowLocate;
     }

     *insLocate = e; /* 插入元素e*/
     ++plist->length; /* 表长增1*/
     return OK;

} /* end ListInsert*/

int LocateElem( SqLinkList list, ElemType e, Status(*compareElem)(ElemType e1,ElemType e2) ){

     int i = 1; /* i的初值为第一个元素的位序*/
     ElemType *temp = list.elem; /* temp 的初值为第一个元素的存储位置*/
     while(i <= list.length && !compareElem(*temp++,e)){
          ++i;
     }

     if(i <= list.length){
          return i;
     }else{
          return 0;
     }
}

Status compareElem(ElemType e1,ElemType e2){

     if(e1 == e2){
          return TRUE;
     }else{
          return FALSE;
     }
}

Status OrderInsert(SqLinkList *list,ElemType e){

     int i;
     ElemType *temp;
     temp = list->elem;

     while(e >= *temp){
          temp++;
     }

     i = LocateElem(*list,*temp,compareElem);

     if(ListInsert(list,i,e) == 1){
          return OK;
     }else{
          return ERROR;
     }

}
void printList(SqLinkList list){

     int i;
     for(i=0;i<list.length;i++){
          printf("%d ",list.elem[i]);
     }
     printf("\n");
}

void main(){

    int flag,i;
    int e= 0;
    SqLinkList La;
    InitList(&La);

    printf("输入数组6个元素的值。\n");
    for(i=0; i<N; i++)
	{
	    scanf("%d",&La.elem[i]);
	}
	printf("此链表各个结点的数据域为：");
	printList(La);
	printf("输入要插入的数据x:");
	scanf("%d",&e);
	OrderInsert(&La,e);
	printf("插入后链表各个结点的数据域为：");
	printList(La);
}
