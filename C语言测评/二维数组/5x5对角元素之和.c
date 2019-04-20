#include <stdio.h>
#define N 10
int AddDiagonal(int a[N][N], int n){

    int i,j,sum;
    sum=0;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
             if(i==j || i+j==n)
                 sum=sum+a[i][j];
    }
    return sum;
}

void main()
{
    int a[N][N];
    int n;
    int i,j,sum;

    printf("Input n:");
    scanf("%d",&n);

    printf("Input %d*%d matrix:\n",n,n);
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
             scanf("%d",&a[i][j]);
    }

    sum=AddDiagonal(a,n-1);

    printf("sum = %d\n",sum);
}
