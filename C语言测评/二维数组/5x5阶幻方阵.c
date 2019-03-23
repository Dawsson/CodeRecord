#include <stdio.h>

void main()
{
    int i=0,j=0;
    int rows[5],cols[5],d1=0,d2=0;
    int flag = 1;

   int nums[5][5] =
   {
        {17,24,1,8,15},
        {23,5,7,14,16},
        {4,6,13,20,22},
        {10,12,19,21,3},
        {11,18,25,2,9}
   };

   // init 0
   for(i=0;i<5;i++){
     rows[i] = 0;
     cols[i] = 0;
   }

   // sum hang and lie
   for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            rows[i]= rows[i] + nums[i][j];
        }

        for(j=0;j<5;j++){
            cols[i] += nums[j][i];
        }
   }

   // dui jiao xian
    d1 = 0;
   for(i=0,j=0;i<5&&j<5;j++,i++){
        d1 = d1+nums[i][j];
   }

   d2 = 0;
   for(i=0,j=5-1;i<5&&j>=0;j--,i++){
        d2 = d2+nums[i][j];
   }

   flag = 1;
   for(i=0;i<5;i++){
     if(d1 != d2){
        flag = 0;
        break;
     }else if(d1 != rows[i]){
         flag = 0;
        break;
     }else if(d1 != cols[i]){
        flag = 0;
        break;
     }
   }

   if(flag == 1){
     printf("It is a magic square!\n");
     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%4d",nums[i][j]);
        }
        printf("\n");
   }

   }

}
