
#include<stdio.h>
#include<stdlib.h>

char *sr(char *strjs)
{
	 long int a,b,c,d,i,x,y,z;
    char op;
	sscanf(strjs, "%ld/%ld%c%ld/%ld", &b,&a,&op,&d,&c);

    if(a==0||c==0)
	{
		printf("分母为0输入错误!");
		exit(0);
	}

    if(op=='+'){y=b*c+d*a;x=a*c;}        /*运算结果均为y/x*/

    if(op=='-'){y=b*c-d*a,x=a*c;}

    if(y==0){
        char *res = (char *)malloc(32);
        sprintf(res, "%ld", y);
	    return res;
    }

    if(y%x==0){
        char *res = (char *)malloc(32);
        sprintf(res, "%ld/%ld", y, x);
	    return res;
    }

    i=2;
    while(i<=x)            /*y/x分子分母约去公因数*/
    {
        if(x%i==0&&y%i==0){
            x=x/i;y=y/i;i=2;
        }
        i++;
    }
	char *res = (char *)malloc(32);
	sprintf(res, "%ld/%ld", y, x);
	return res;
}

void main()
{
	char str[32] = {0};
	printf("请输入分数运算式:\n");
	while(scanf("%s", str) != EOF){
        char *jg = sr(str);
	    printf("%s\n",jg);
	}
}
