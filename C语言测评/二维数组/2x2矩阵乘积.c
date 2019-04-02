#include <stdio.h>

void main()
{
    int i,j,k;
    int a[2][3],b[3][2],c[2][2];

    printf("ÇëÊäÈë¾ØÕóA£º\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("ÇëÊäÈë¾ØÕóB£º\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j] = 0;
           for(k=0;k<3;k++){
             c[i][j] += a[i][k]*b[k][j];
           }
        }
    }

    printf("array C=\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}
