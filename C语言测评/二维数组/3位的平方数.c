#include <stdio.h>
void main()
{
    int a[20],num[20][3],b[10];
    int i,j,k,m,n,t,flag;
    printf("The 3 squares with 3 different digits each are:\n");
    for(j=0,i=11;i<=31;i++)
        if(i%10!=0)
        {
            k=i*i;
            num[j+1][0]=k/100;
            num[j+1][1]=k/10%10;
            num[j+1][2]=k%10;
            if(!(num[j+1][0]==num[j+1][1]||num[j+1][0]==num[j+1][2]||num[j+1][1]==num[j+1][2]))
            {
                a[++j]=k;
            }
        }
    for(i=1;i<=j-2;++i)
    {
        b[1]=num[i][0];
        b[2]=num[i][1];
        b[3]=num[i][2];
        for(t=i+1;t<=j-1;++t)
        {
            b[4]=num[t][0];
            b[5]=num[t][1];
            b[6]=num[t][2];
            for(flag=0,m=1;!flag&&m<=3;m++)
            {
                for(n=4;!flag&&n<6;n++)
                    if(b[m]==b[n]) flag=1;
            }
            if(!flag)
                for(k=t+1;k<=j;++k)
                {
                    b[7]=num[k][0];
                    b[8]=num[k][1];
                    b[9]=num[k][2];
                    for(flag=0,m=1;!flag&&m<=6;m++)
                        for(n=7;!flag&&n<=9;n++)
                            if(b[m]==b[n]) flag=1;
                    if(!flag)
                        printf("%d,%d,%d\n",a[i],a[t],a[k]);
                }
        }
    }
}
