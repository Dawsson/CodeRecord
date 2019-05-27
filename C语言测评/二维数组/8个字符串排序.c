#include <stdio.h>
#include <string.h>
#define N 5

void main(){
    int i,j;
    char str[N][20],temp[20];

    for(i=0;i<N;i++){
        scanf("%s",str[i]);
    }

    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if(strcmp(str[i],str[j]) > 0){
                strcpy(temp,str[j]);
                strcpy(str[j],str[i]);
                strcpy(str[i],temp);
            }
        }
    }

    for(i=0;i<N;i++){
        printf("%s\n",str[i]);
    }

}
