#include <stdio.h>

main()
{
    int  a[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};
    int i,j,t;

    printf("before transposition\n");
    for (i=0; i<=4; i++)
       for (j=0; j<=4; j++)
             printf("%4d%c",a[i][j],j-4?' ':'\n' );

    for (i=0; i<=4; i++)
       for (j=0; j<=4; j++)
       {
            if (i < j)
            {
                t = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = t;
            }
       }

    printf("after transposition\n");
    for (i=0; i<=4; i++)
       for (j=0; j<=4; j++)
             printf("%4d%c", a[i][j],j-4?' ':'\n' );
}
