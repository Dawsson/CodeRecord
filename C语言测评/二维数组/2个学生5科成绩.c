#include <stdio.h>

float avgSS(float total){
    return total/5;
}

float avgCS(float s1,float s2){
    return (s1+s2)/2;
}

float mostPos(float s[2][5]){
    int i,j;
    float most=0;
    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            if(s[i][j] > most){
                most = s[i][j];
            }
        }
    }
    return most;
}

float fangCha(float x1,float x2){
    float avg = (x1+x2)/2;
    float result = 0;
    result = ((x1-avg)*(x1-avg)+(x2-avg)*(x2-avg))/2;
    return result;
}


void main(){
    int i,j;
    float score[2][5];
    float totalScore1=0,totalScore2=0,most;
    int pos[2];

    printf("\n输入学生%4d的5个成绩：\n",1);
    for(i=0;i<5;i++){
        scanf("%f",&score[0][i]);
        totalScore1 += score[0][i];
    }

    printf("\n输入学生%4d的5个成绩：\n",2);
    for(i=0;i<5;i++){
        scanf("%f",&score[1][i]);
        totalScore2 += score[1][i];
    }


    printf("\n 序号     课程1     2     3     4     5     平均分\n");
    printf("\n NO%2d%8.2f%8.2f%8.2f%8.2f%8.2f%8.2f",1,
           score[0][0],score[0][1],score[0][2],score[0][3],score[0][4],avgSS(totalScore1));
    printf("\n NO%2d%8.2f%8.2f%8.2f%8.2f%8.2f%8.2f",2,
           score[1][0],score[1][1],score[1][2],score[1][3],score[1][4],avgSS(totalScore2));
    printf("\n课平均%8.2f%8.2f%8.2f%8.2f%8.2f",avgCS(score[0][0],score[1][0]),
           avgCS(score[0][1],score[1][1]),avgCS(score[0][2],score[1][2]),avgCS(score[0][3],score[1][3]),avgCS(score[0][4],score[1][4]));


    most = mostPos(score);
    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            if(score[i][j] == most){
                pos[0] = i;
                pos[1] = j;
                break;
            }
        }
    }
    printf("\n\n最高分%8.2f是%d号学生的第%d门课\n",most,pos[0]+1,pos[1]+1);


    printf("\n方差 %8.2f",fangCha(avgSS(totalScore1),avgSS(totalScore2)));

}
