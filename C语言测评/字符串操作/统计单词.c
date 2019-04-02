#include <stdio.h>

int main(void)
{
    char str[256]= "Hello world, I am tang pan.";
    char *cp, *ccp;
    int cnt = 0;

    // printf("Input sentence:\n");
    // gets(str);

    for(cp = str; *cp != '\0';)
    {
        ccp = cp;
        while(*ccp != ' ' && *ccp != '\0')
            ccp++;
        if(ccp != cp)
        {
            cnt++;
            cp = ccp;
        }
        if(*ccp == ' ')
        {
            *ccp = '\0';
            cp++;
        }
    }

    printf("There are %d words.\n", cnt);
    cp = str;
    while(cnt > 0)
    {
        while(*cp == '\0')
            cp++;
        printf("%s ", cp);
        cp += strlen(cp) +1;
        cnt--;
    }

    return 0;
}
