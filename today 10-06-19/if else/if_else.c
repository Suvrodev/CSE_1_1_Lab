#include<stdio.h>
main()
{
     int a,age,y,i,t;

     scanf("%d %d %d",&a,&age,&y);
     if(age<16)
     {
       i=11;
     }
     else if(age>=16 && age<=18)
     {
       i=9;
     }
      else if(age>18 && age<=21)
     {
       i=8;
     }
     else
     {
         i=7;
     }
        t = a + (a*i*y)/100;
        printf("\n\ntotal = %d",t);
}
