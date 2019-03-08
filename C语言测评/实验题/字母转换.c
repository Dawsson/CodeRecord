#include <stdio.h>

void main()
{
    char ch;
    printf("Press a key and then press Enter:");
    ch = getchar();

    printf("%c, %d\n",ch-32,ch-32);
}
