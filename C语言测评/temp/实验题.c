#include<stdio.h>
int IsPerfect(int x);
main()
{
    int num;
    printf("Input m:\n");
    scanf("%d",&num);
    if(IsPerfect(num) == 1){
        printf("%d is a perfect number\n",num);
    }else{
        printf("%d is not a perfect number\n",num);
    }
}
int IsPerfect(int x)
{
    if(x == 1)
        return 0;
    else
    {
        int i,j,sum = 1;
        for(i = 2;i<x;i++)
            if(x%i == 0)
            sum += i;
        if(sum == x)
            return 1;
        else
            return 0;
    }

}
