#include <stdio.h>
int a[2][3]={{1,2,3},{4,5,6}};
main()
{
    int i,j,b[3][2];
    for(i=0;i<=1;i++)
        for(j=0;j<=2;j++)
            b[j][i]=a[i][j];
    for(i=0;i<=2;i++,printf("\n"))
        for(j=0;j<=1;j++)
            printf("%d ",b[i][j]);
}
