#include<stdio.h>
main()
{
    int a[5],i,mx,mn;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
        mx=a[0];
        mn=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
        }
        if(a[i]<mn)
        {
            mn=a[i];
        }
    }
    printf("Maximum number is=%d",mx);
    printf("\nMinimum number is=%d",mn);

}
