#include <stdio.h>

void func(long n,int i){
    char symbol[10][8]={"零","一","二","三","四","五","六","七","八","九"};
    char unit[10][8] = {"","十","百","千","万","十","百","千","亿"};

    if(n){
        if(n<0){
            printf("负");
            n=-n;
        }

        if(n==100000000){
            printf("一亿");
            return;
        }

        if(n%10 == 0){
            for(;n%100/10==0;n/=10,++i);
        }
        func(n/10,i+1);
        printf("%s%s",symbol[n%10],n%10?unit[i]:"");
    }

    if(!n && !i){
        printf("%s",symbol[i]);
    }
}

void main()
{
    long num;
    scanf("%ld",&num);
    func(num,0);
}
