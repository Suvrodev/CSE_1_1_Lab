#include<stdio.h>
main()
{
    int i,j,a[7][3]={ {},
                     {12,32,132},
                     {121,324,124},
                     {1212,112,12},
                     {1213,3324,1424},
                     {1,2,3},
                     {1221,334,2334}
                  };
                  for(i=0;i<7;i++)
                  {
                      printf("\nRoll Number %d",i+1);
                      for(j=0;j<3;j++)
                        printf(" sub%d marks= %d",j+1, a[i][j]);
                  }
}
