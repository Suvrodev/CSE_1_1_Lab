#include<stdio.h>
main()
{
    int i,j,a[7][3]={
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
                printf("\nRoll %d= ",i+1);

              for(j=0;j<3;j++)
              {
                  printf("sub %d =%d",j+1,a[i][j]);
              }
    }

}
