#include<stdio.h>
#include<string.h>
#define N 5
#define CMAX 20

int main()
{
    char a[N][CMAX], term[CMAX];
    int i, j;

     printf("Input five countries' names:\n");
    for (i = 0; i < N; i++)
    {
        //scanf("%s", a[i]);
        gets(a[i]);
    }

    for (i = 0; i < N - 1; i++)
    {
        for (j = 1; j < N - i; j++)
        {
            if (strcmp(a[j], a[j - 1]) < 0)
            {
                strcpy(term, a[j]);
                strcpy(a[j], a[j - 1]);
                strcpy(a[j - 1], term);
            }
        }
    }

    printf("The minimum is:%s\n", a[0]);
    for (i = 0; i < N; i++)
    {
        printf("%s\n", a[i]);
    }

    return 0;
}
