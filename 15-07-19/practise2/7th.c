#include<stdio.h>
main()
{
    int m,i,j,a[7][3]={
                                {},
                                 {60,80,70},
                                 {50,50,50},
                                 {60,50,70},
                                 {50,50,50},
                                 {40,45,50},
                                 {65,70,60}
                                };
          for(i=0;i<=6;i++)
          {
              printf("\nRoll no=%d  ",i+1);
              m=a[i][0];
              for(j=0;j<3;j++)
              {
                  if(a[i][j]>m)
                  {
                      m=a[i][j];
                  }
              }
              printf("Maximum number is=%d",m);
          }
}
