#include<stdio.h>
main()
{
    int i,j,a[10]={1,2,3};
    for(i=3;i<=10;i++)
        a[i]=a[i-1]+a[i-2];
    for(i=0;i<10;i++)
        printf("  %d",a[i]);
}
