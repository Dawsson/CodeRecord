#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100

int IsNumIn(char word[]){
    int i;
    char ch;
    for(i=0;*(word+i)!='\0';i++){
        ch = *(word+i);
        if(48<=ch && ch<=57){
            return 1;
        }
    }
    return 0;
}

int IsSpcIn(char word[]){
    int i;
    for(i=0;*(word+i)!='\0';i++){
        if(isspace(*(word+i))){
            return 1;
        }
    }
    return 0;
}

void Trim(char oldWord[],char newWord[]){
    int i=0,j=0;
    while(isspace(*(oldWord+i)))
    i++;
    while( *(oldWord+i) != '\0')
    {
        *(newWord+j)=*(oldWord+i);
        i++;
        j++;
    }
    i--;
    j--;
    for(;isspace(*(oldWord+i));i--,j--)
    {
        *(newWord+j)=0;
    }
}

void main()
{
    char str[N],str1[N];
    int i,j;
    for(i=0;i<N;i++)
    {
        *(str1+i)=0;
        *(str+i)=0;
    }
    gets(str);
    Trim(str,str1);
    if(IsNumIn(str1)){
        printf("error\n");
    }

    if(IsSpcIn(str1)){
        printf("have space.\n");
    }
}

