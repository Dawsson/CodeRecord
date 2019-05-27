#include <stdio.h>
#define N 20
int main() {
	int i,j,k,base=1;
	int a[N][N]= {0};
	int n=0,sideSum=0;
	while(n<2 || n>10){
        printf("请输入一个整数N([2,10]):");
        scanf("%d",&n);
	}

    printf("%d阶螺旋矩阵：\n",n);
	for (k=0;k<n/2;k++) {
		for (i=k;i<=n-1-k;i++){
            a[k][i]=base++;
            if(k==0){
                sideSum += a[k][i];
            }
		}
		for (j=k+1;j<n-1-k;j++){
            a[j][n-1-k]=base++;
            if(k==0){
                sideSum += a[j][n-1-k];
            }
		}
		for (i=n-1-k;i>k;i--){
            a[n-1-k][i]=base++;
            if(k==0){
                sideSum += a[n-1-k][i];
            }
		}
		for (j=n-1-k;j>k;j--){
            a[j][k]=base++;
            if(k==0){
                sideSum += a[j][k];
            }
		}
		if(n%2==1){
            a[(n-1)/2][(n-1)/2]=base;
		}
	}
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++){
            printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("该矩阵最外圈的和是：%d\n",sideSum);
	return 0;
}
