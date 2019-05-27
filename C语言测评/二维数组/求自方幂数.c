#include <stdio.h>
#include <math.h>

/* 一个n位正整数如果等于它的n个数字的n次方和，该数称为n位自方幂数。设计求3~6位自方幂数 */
int main()
{
	int n,x;

	for(n=3;n<=6;n++){
        x = 0;
        printf("%d位自幂数有:",n);
        for(x = pow((double)10,n-1); x < (pow((double)10,n)); x++)
        {
            int b = x; //保存x的值
            int sum = 0, a = 0, i;
            for(i = 1; i <= n; i++)
            {
                a = b%10; //a是x的最后一位
                b /= 10;  //b不段除10去掉后一位
                sum += pow((double)a,n);
            }
            if(x == 153)
            {
                printf("%ld\t",x);
            }
            if(sum == x)
            {
                printf("%ld\t",x);
            }
        }
        printf("\n");
	}
	return 0;
}

