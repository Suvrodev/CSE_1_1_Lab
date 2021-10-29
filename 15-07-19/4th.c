#include<stdio.h>
main()
{
   int i,a[5],c=0,d=0;
   a[2]=20;
   a[3]=-50;
   a[4]=45;
   a[0]=37;
   a[1]=10;
   for(i=0;i<5;i++)
   {
         if(a[i]%2==0)          //[if er sathe jodi 1 line er samparko thake taile {} lagbe na]
         c++;
          else
            d++;
   }



 printf("Even %d Odd %d ",c,d);
}
