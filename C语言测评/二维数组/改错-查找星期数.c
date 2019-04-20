#include  <stdio.h>
#include  <string.h>
#define   WEEKDAYS  7             /*每星期天数*/
#define   MAX_STR_LEN  10         /*字符串最大长度*/
int main()
{
    int    i, pos;
    int    findFlag = 0;
    char   x[MAX_STR_LEN];
    char   weekDay[][MAX_STR_LEN] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("Please enter a string:\n");
    scanf("%s", x);
    for (i = 0; i < WEEKDAYS && !findFlag; i++)
    {
        if (strcmp(x, weekDay[i]) == 0)
        {
            pos = i;
            findFlag = 1;
        }
    }
    if (findFlag)
        printf("%s is %d\n", x, pos);
    else
        printf("Not found!\n");
    return 0;
}
