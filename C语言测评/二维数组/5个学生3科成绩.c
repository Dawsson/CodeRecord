#include <stdio.h>

void main(){
    int i,j;
    int stu[5][7];
    int sum=0,avg=0,flag=89;

    
    for(i=0;i<5;i++){
        sum=0,avg=0,flag=89;
        printf("Enter No. and score as: MT EN PH\n");
        for(j=0;j<4;j++){
            scanf("%d",&stu[i][j]);
            if(j >= 1){
                if(stu[i][j] <= 90){
                    flag = 78;
                }
                sum += stu[i][j];
            }
        }
        stu[i][4] = sum;
        avg = sum/3;
        stu[i][5] = avg;
        stu[i][6] = flag;
    }

    printf("NO\tMT\tEN\tPH\tSUM\tV\t>90\n");
    printf("------------------------------------------------------\n");

    for(i=0;i<5;i++){
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%c\n",
               stu[i][0],stu[i][1],stu[i][2],stu[i][3],stu[i][4],stu[i][5],(char)stu[i][6]);
    }

}
