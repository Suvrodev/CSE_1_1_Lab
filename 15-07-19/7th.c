#include<stdio.h>
main()
{
   int m,i,j,a[6][3]={
                                {},
                                 {60,80,70},
                                 {50,50,50},
                                 {60,50,70},
                                 {50,50,50},
                                 {40,45,50},
                                 {65,70,60}
                                };
       for(i=1;i<6;i++)
       {
          printf("Roll %d  ",i);
       for(j=0;j<3;j++)
       {
          printf("Sub %d = %d ",j+1,a[i][j]);
       }
       printf("\n");
       }
}
