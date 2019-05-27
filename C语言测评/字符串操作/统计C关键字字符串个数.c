#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 80
#define NKEYS (sizeof(keytab) / sizeof(struct key))

struct key{
    char*word;
    int count;
};

struct key keytab[] ={
    "auto", 0,
    "break", 0,
    "case", 0,
    "char", 0,
    "const", 0,
    "continue", 0,
    "default", 0,
    "do", 0,
    "double", 0,
    "else", 0,
    "enum", 0,
    "extern", 0,
    "float", 0,
    "for", 0,
    "goto", 0,
    "if", 0,
    "int", 0,
    "long", 0,
    "register", 0,
    "return", 0,
    "short", 0,
    "singed", 0,
    "sizeof", 0,
    "static", 0,
    "struct", 0,
    "switch", 0,
    "typedef", 0,
    "union", 0,
    "unsigned", 0,
    "void", 0,
    "volatile", 0,
    "while", 0
}                         ;

void getword(char*, int);
int binsearch(char*, struct key *, int);

int main(int argc, char*argv[]){
    int n;
    char word[MAXWORD];

    printf("������Ϊ��ͳ��C���ԵĹؼ��ֵĸ����������룬����end�������룺\n");

    do{
        getword(word, MAXWORD);
        if(isalpha(word[0])){
            if((n = binsearch(word, keytab, NKEYS)) >= 0){
                keytab[n].count++;//�ҵ����Ӧ����+1
            }
        }
    }

    while(strcmp(word,"end") != 0);

    printf("����������C���Թؼ��ֳ��ֵĴ���ͳ�����£�\n");

    for(n = 0; n < NKEYS; n++){
        if(keytab[n].count > 0){
            printf("%-10s: %6d\n", keytab[n].word, keytab[n].count);
        }
    }
    return 0;

}

/* �۰���ң���tab[0]��tab[n-1]�в���word */
int binsearch(char*word, struct key tab[], int n){

    int result;
    int low, high, mid;

    low = 0;
    high = n - 1;

    while(low <= high){
        mid = (low + high) / 2;
        if((result = strcmp(word, tab[mid].word)) < 0){
            high = mid - 1;
        }else if(result > 0){
            low = mid + 1;
        }else{
            return mid;
        }
    }
    return -1;

}

/* getword���������л�ȡĳ������ */
void getword(char*word, int lim){
    int c;
    void ungetch(int);
    char *w = word;

    while(isspace(c = getchar())){
    }

    if(c != EOF){
        *w = c;
        w++;
    }

    if(!isalpha(c)){
        *w = '\0';
    }

    for( ; --lim > 0; w++){
        if(!isalnum(*w = getchar())){
            //�����ĳ���ַ�������ĸ�������˻������뻺����
            ungetch(*w);
            break;
        }
    }
    *w = '\0';
}
