#include<stdio.h>
main()
{
    int i,a[37]={1,2,3};
    for(i=3;i<5;i++)
    a[i]=a[i-1]+a[i-2];
    for(i=0;i<5;i++)
        printf(" %d",a[i]);
}
