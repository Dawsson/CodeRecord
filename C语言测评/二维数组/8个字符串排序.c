#include <stdio.h>
#include <string.h>

void main(){
    int i,j;
    char str[8][20],temp[20];

    for(i=0;i<8;i++){
        scanf("%s",str[i]);
    }

    for(i=0;i<7;i++){
        for(j=i+1;j<8;j++){
            if(strcmp(str[i],str[j]) > 0){
                strcpy(temp,str[j]);
                strcpy(str[j],str[i]);
                strcpy(str[i],temp);
            }
        }
    }

    for(i=0;i<8;i++){
        printf("%s\n",str[i]);
    }

}
