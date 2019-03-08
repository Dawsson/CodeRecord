#include <stdio.h>

void func(long n,int i){
    char symbol[10][8]={"��","һ","��","��","��","��","��","��","��","��"};
    char unit[10][8] = {"","ʮ","��","ǧ","��","ʮ","��","ǧ","��"};

    if(n){
        if(n<0){
            printf("��");
            n=-n;
        }

        if(n==100000000){
            printf("һ��");
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
