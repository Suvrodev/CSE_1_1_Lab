#include<stdio.h>
main()
{
   int i,a[5]={1,2,3,4,5};
   a[2]=20;
   a[3]=-50;
   a[4]=45;
   a[0]=37;
   a[1]=10;
   for(i=0;i<5;i++)
   {
  if(a[i]%2==0)
  {
      continue;
  }
      printf("%d  ",a[i]);
   }
}
