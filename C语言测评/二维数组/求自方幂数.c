#include <stdio.h>
#include <math.h>

/* һ��nλ�����������������n�����ֵ�n�η��ͣ�������Ϊnλ�Է������������3~6λ�Է����� */
int main()
{
	int n,x;

	for(n=3;n<=6;n++){
        x = 0;
        printf("%dλ��������:",n);
        for(x = pow((double)10,n-1); x < (pow((double)10,n)); x++)
        {
            int b = x; //����x��ֵ
            int sum = 0, a = 0, i;
            for(i = 1; i <= n; i++)
            {
                a = b%10; //a��x�����һλ
                b /= 10;  //b���γ�10ȥ����һλ
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

