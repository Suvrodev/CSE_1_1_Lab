#include<stdio.h>
main()
{
    int a[10]={12,354,21,-56,-65,-150,245,987,566,284},i;
    for(i=0;i<10;i++)
        printf("\t%d",a[i]);
        printf("\n");

    for(i=9;i>=0;i--)
        printf("\t%d",a[i]);
}
