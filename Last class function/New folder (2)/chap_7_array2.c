#include<stdio.h>
main()
{
    int i,a[5],d=0,maxx,mini;

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    maxx=a[0];
    mini=a[0];

      for(i=1;i<5;i++)
    {
       if(a[i]>maxx)
       {
        maxx=a[i];
       }
         if(a[i]<mini)
       {
        mini=a[i];
       }
    }

     printf("maximum %d minimum %d",maxx,mini);


}

