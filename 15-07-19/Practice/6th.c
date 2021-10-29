#include<stdio.h>
main()
{
    int m,i,j,a[6][3]={
                       {1,2,3},
                       {2,3,4},
                       {3,4,5},
                       {4,5,6},
                       {5,6,7},
                       {6,7,8}
                    };
   for(i=1;i<6;i++)
   {
    printf("Roll= %d ",i);

   for(j=0;j<3;j++)
   {
       printf(" sub %d  = %d",j+1,a[i][j]);
   }
   printf("\n");



}
}
