#include<stdio.h>
#include<string.h>
void Input(char a[][80], int n);
void Sort(char a[][80], int n);
void Print(char a[][80], int n);
int main()
{
    char a[10][80];

    Input(a, 10);    //1
    Sort(a, 10);     //1
    Print(a, 10);    //1

    return 0;
}
void Input(char a[][80], int n)
{
    int i;

    for (i = 0; i < n; i++)          //1
    {
        gets(a[i]);
    }
}
void Sort(char a[][80], int n)
{
    int i, j;
    char term[80];              //1

    for (i = 0; i < n - 1; i++)          //1
    {
        for (j = i + 1; j < n; j++)      //1
        {
            if (strcmp(a[i], a[j]) > 0)      //1
            {
                strcpy(term, a[i]); //1
                strcpy(a[i], a[j]); //1
                strcpy(a[j], term); //1
            }
        }
    }
}
void Print(char a[][80], int n)
{
    int i;

    for (i = 0; i < n; i++)         //1
    {
        puts(a[i]);
    }
}
