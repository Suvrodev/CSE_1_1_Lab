#include<stdio.h>
main()
{
    int i,a[20]={1,2,3};
    for(i=3;i<7;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("\n");
    for(i=0;i<7;i++)
        printf("%d ",a[i]);
}
