#include<stdio.h>
main()
{
   int a[5],i,d=0,maxx,minn;
   for(i=0;i<5;i++)
   {
      scanf("%d",&a[i]);
   }
   maxx=a[0];
   minn=a[0];
   for(i=1;i<5;i++)
   {
     if(a[i]>maxx)
        {
           maxx=a[i];
        }
         if(a[i]<minn)
        {
           minn=a[i];
        }
   }
 printf("Maximum Number is=%d",maxx);
  printf("\nMinimum Number is=%d",minn);


}
