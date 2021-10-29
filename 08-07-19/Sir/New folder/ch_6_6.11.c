
#include<stdio.h>
main()
{
   int a,r,d,t=0;
   scanf("%d",&a);
   while(a!=0)
   {
       r= a%2;
       a = a/2;
       t=t+r;
       t = t*10;
   }
  //  printf("%d",t);
    while(t!=0)
    {
        r = t%10;
        t = t/10;
        printf("%d",r);
    }

}

