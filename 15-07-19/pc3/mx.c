#include<stdio.h>
main()
{
    int a[100],i,j,mx,mn;
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    mx=a[0];
    mn=a[0];
    for(i=0;i<8;i++)
    {
        if(a[i]>mx)
            mx=a[i];
        if(a[i]<mn)
            mn=a[i];
    }
    printf("The maximum Value is=%d",mx);
    printf("\nThe minimum Value is=%d",mn);

}
