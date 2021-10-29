#include<stdio.h>
main()
{
    int b,p=0,t=1;
    printf("Enter base and Power=");
    scanf("%d %d",&b,&p);
    while(p>0)
   {
     t=t*b;
     p=p-1;
   }
     printf("\n%d",t );

}

