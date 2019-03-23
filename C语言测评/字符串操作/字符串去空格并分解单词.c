#include <stdio.h>
#include <ctype.h>

#define N 100

int IsNumIn(char word[]);
int IsSpcIn(char word[]);
void Trim(char oldWord[], char newWord[]);
void Seg(char words[], char wArray[][100] );

int main()
{
    char str1[N],str[N],w_Arr[20][100];
    int i,j;
    for(i=0;i<N;i++)
    {
        *(str1+i)=0;
        *(str+i)=0;
    }
    for(i=0;i<20;i++)
    {
        for(j=0;j<100;j++)
        w_Arr[i][j]=0;
    }
    gets(str1);
    Trim(str1,str);
    if(IsNumIn(str))
    printf("error");
    else
    {
        if(IsSpcIn(str))
        {
            Seg(str,w_Arr);
            for(i=0;w_Arr[i][0]!='\0';i++)
            {
                puts(w_Arr[i]);
            }
        }
        else
        puts(str);
    }
    return 0;
}

int IsNumIn(char word[])
{
    int i;
    for(i=0;*(word+i)!='\0';i++)
    {
        if(isdigit(*(word+i)))
        return 1;
    }
    return 0;
}

int IsSpcIn(char word[])
{
    int i;
    for(i=0;*(word+i)!='\0';i++)
    {
        if(isspace(*(word+i)))
        return 1;
    }
    return 0;
}

void Trim(char oldWord[], char newWord[])
{
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

void Seg(char words[], char wArray[][100] )
{
    int i,j=0,k=0;
    for(i=0;i<N;i++)
    {
        if(isalpha(*(words+i)))
        {
            wArray[j][k]=*(words+i);
            k++;
        }
        else
        {
            j++;
            k=0;
        }
    }
}
