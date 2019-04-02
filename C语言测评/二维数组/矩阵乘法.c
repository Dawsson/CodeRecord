#include <stdio.h>
void main()
{ static int a[2][3];
  static int b[3][2];
  int c[2][2],i,j;
  printf("ÇëÊäÈë¾ØÕóA£º\n");
  for(i=0;i<2;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
  printf("ÇëÊäÈë¾ØÕóB£º\n");
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
