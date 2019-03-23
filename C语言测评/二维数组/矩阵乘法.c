/*
矩阵乘法。编写一个C函数实现M行K列矩阵与K行N列的矩阵的乘积。设A为M行K列的矩阵，B为K行N列的矩阵，则C=A×B的积为M行N列的矩阵。
其中：M为2，K为3，N为2.
矩阵乘法的规则是：设A[m,k]，B[k,n]，则C[m,n]=A[m,k]×B[k,n]，其中：
C[i,j]=∑kl=1A[i,l]×B[l,j], (i=1,2,…,m   j=1,2,…,n)
**输入提示："请输入矩阵A："       "请输入矩阵B："
**输入格式："%d"
**输出格式要求："array C=\n"    "\t%d"

程序运行示例如下：
请输入矩阵A：↙
1 2 3
4 5 6
请输入矩阵B：↙
1 2
1 2
1 2
array C=↙
	6	12↙
	15	30↙
*/

#include <stdio.h>
void main()
{ static int a[2][3];
  static int b[3][2];
  int c[2][2],i,j;
  printf("请输入矩阵A：\n");
  for(i=0;i<2;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
  printf("请输入矩阵B：\n");
  for(i=0;i<3;i++)
    for(j=0;j<2;j++)
    scanf("%d",&b[i][j]);
  mat (a,b,c,2,2,3);
  printf("array C=\n");
  printa(c,2,2);
}

void mat(a,b,c,m,n,k)
  int m,n,k,a[][3],b[][2],c[][2];
 {int i,j,l;
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      for(c[i][j]=0,l=0;l<k;l++)
         c[i][j]+=a[i][l]*b[l][j];
 }
 void printa(a,m,n)
   int *a,m,n;
 { int i,j;
   for(i=0;i<m;i++,printf("\n"))
     for(j=0;j<n;j++,a++)
        printf("\t%d",*a);
 }
