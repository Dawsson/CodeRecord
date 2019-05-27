#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INIT_SIZE 20  /* �洢�ռ�ĵĳ�ʼ������*/
#define INCREMENT_SIZE 10

/* ״̬���볣�� */
#define N 6
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status; /* ���������ͣ���ֵΪ�������״̬����*/
typedef int Boolean; /* Boolean�ǲ�������,��ֵ��TRUE��FALSE */

typedef int ElemType;
typedef struct SqLinkList{
     ElemType *elem;
     int length;
     int listsize;
}SqLinkList;

/* ��ʼ������
   �������������һ���յ����Ա�list
   */
Status InitList(SqLinkList *plist){

     (*plist).elem = (ElemType *)malloc(INIT_SIZE*sizeof(ElemType));
     if(!(*plist).elem){
          exit(ERROR); /* �洢����ʧ��*/
     }

     (*plist).length = N; /* �ձ���Ϊ0*/
     (*plist).listsize = INIT_SIZE; /* ��ʼ�洢����*/
     return OK;
} /* end InitList*/

Status ListInsert(SqLinkList *plist,int i,ElemType e){

     ElemType *newbase,*insLocate,*nowLocate; /*�»�ַ��Ԫ�ز���λ��*/

     /* �� i ���ڷ�Χ��ʱ*/
     if(i<1 || i > plist->length+1){
          return ERROR;
     }

     /* ˳�����Ա�����,���ӷ���*/
     if(plist->length >= plist->listsize){
          newbase = (ElemType *)realloc(plist->elem,
                                   (plist->listsize + INCREMENT_SIZE)*sizeof(ElemType));

          if(!newbase){
               exit(ERROR); /* �洢����ʧ��*/
          }
          plist->elem = newbase; /* �»�ַ*/
          plist->listsize += INCREMENT_SIZE; /* ���Ӵ洢����*/
     }

     insLocate = &(plist->elem[i-1]);

     /* ��Ҫ����λ�ú������Ԫ������ƶ�һλ*/
     for(nowLocate = &(plist->elem[plist->length - 1]); nowLocate>=insLocate; --nowLocate){
          *(nowLocate+1) = *nowLocate;
     }

     *insLocate = e; /* ����Ԫ��e*/
     ++plist->length; /* ����1*/
     return OK;

} /* end ListInsert*/

int LocateElem( SqLinkList list, ElemType e, Status(*compareElem)(ElemType e1,ElemType e2) ){

     int i = 1; /* i�ĳ�ֵΪ��һ��Ԫ�ص�λ��*/
     ElemType *temp = list.elem; /* temp �ĳ�ֵΪ��һ��Ԫ�صĴ洢λ��*/
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

    printf("��������6��Ԫ�ص�ֵ��\n");
    for(i=0; i<N; i++)
	{
	    scanf("%d",&La.elem[i]);
	}
	printf("�������������������Ϊ��");
	printList(La);
	printf("����Ҫ���������x:");
	scanf("%d",&e);
	OrderInsert(&La,e);
	printf("����������������������Ϊ��");
	printList(La);
}
