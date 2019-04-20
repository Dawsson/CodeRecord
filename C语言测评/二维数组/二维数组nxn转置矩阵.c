#include <stdio.h>
#define N 10
void Transpose(int a[][N], int n);
void InputMatrix(int a[][N], int n);
void PrintMatrix(int a[][N], int n);
int main()
{
    int s[N][N], n;
    printf("Input n:\n");
    scanf("%d", &n);//1
    InputMatrix(s, n);//1
    Transpose(s, n);//1
    printf("The transposed matrix is:\n");
    PrintMatrix(s, n);//1
    return 0;
}
void Transpose(int a[][N], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++) //1
    {
        for (j = i; j < n; j++)//1
        {
            temp = a[i][j];//1
            a[i][j] = a[j][i];//1
            a[j][i] = temp;//1
        }
    }
}
void InputMatrix(int a[][N], int n)
{
    int i, j;
    for (i = 0; i < n; i++)//1
    {
        for (j = 0; j < n; j++)//1
        {
            scanf("%d", &a[i][j]); //1
        }
    }
}
void PrintMatrix(int a[][N], int n)
{
    int i, j;
    for (i = 0; i < n; i++) //1
    {
        for (j = 0; j < n; j++)  //1
        {
            printf("%5d", a[i][j]); //1
        }
        printf("\n");    //1
    }
}
