#include<stdio.h>
main()
{
   int m,i,j,a[6][3]={
                                {},
                                 {60,80,70},
                                 {50,50,50},
                                 {60,50,70},
                                 {40,45,50},
                                 {65,70,60}
                                };
       for(i=1;i<6;i++)
       {
          printf("Roll %d  ",i); //7.5 7.6
          m=a[i][0];
       for(j=0;j<3;j++)
       {
          if(a[i][j]>m)
          {
             m=a[i][j];
          }
       }
       printf("maximum= %d",m);
       printf("\n");
       }
}
