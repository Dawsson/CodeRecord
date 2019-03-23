#include <stdio.h>
#include <string.h>
#define N 30
int main( )
{
    char  str[N], c;
    int  n, i, j;

    printf("Please Enter String1:\n");
    gets(str);
    n = strlen(str) - 1;

    for (i = 0; i <= n / 2; i++)
    {
        c = str[i];
        str[i] = str[n - i];
        str[n - i] = c;
    }

    printf("Result is:\n%s\n", str);
    return 0;
}
