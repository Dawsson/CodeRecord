#include <stdio.h>

void main()
{
    float h,w,t;

    printf("Please enter h,w:\n");
    scanf("%f,%f",&h,&w);
    t = w/(h*h);

    if(t < 18){
        printf("Lower weight!\n");
    }else if(18<=t && t<25){
        printf("Standard weight!\n");
    }else if(25<=t && t<27){
        printf("Higher weight!\n");
    }else if(t >= 27){
        printf("Too fat!\n");
    }

}
