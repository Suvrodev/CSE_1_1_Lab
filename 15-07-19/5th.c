#include<stdio.h>
main()
{
   int a[5],i,c=99,d=0;
   for(i=0;i<5;i++)
   {
      scanf("%d",&a[i]);
   }

   for(i=0;i<5;i++)
   {
     if(a[i]==99 || a[i]==45)
      d++;
   }
   if(d==0)
       printf("You Loose");
   else
    printf("You won");

}
