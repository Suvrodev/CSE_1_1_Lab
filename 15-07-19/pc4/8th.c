#include<stdio.h>
main()
{
    int mx,mn,i,j,a[7][3]={
                      {},
                     {12,32,132},
                     {121,324,124},
                     {1212,112,12},
                     {1213,3324,1424},
                     {1,2,3},
                     {1221,334,2334}
                  };

                  for(i=0;i<7;i++)
                  {
                    printf("\nRoll Number=%d ",i+1);
                      mx=a[i][0];
                   for(j=0;j<3;j++)
                   {
                       if(a[i][j]>mx)
                       {
                        mx=a[i][j];
                       }

                   }
                   printf("Maximum Number is =%d\n",mx);

}
}
