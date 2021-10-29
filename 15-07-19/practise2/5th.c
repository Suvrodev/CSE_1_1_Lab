#include<stdio.h>
main()
{
    int i,a[10],d=0,mx,mn;
    printf("Enter 10 numbers=");
    for(i=0;i<10;i++)
    {

      printf("%d~~",i);
    {
        scanf("%d",&a[i]);
    }
    }
    mx=a[0];
    mn=a[0];
    for(i=0;i<10;i++)
    {
    if(a[i]>mx)
        mx=a[i];
    if(a[i]<mn)
        mn=a[i];
    }
        printf("Maximumn Number is=%d",mx);
        printf("\nMinimum Number is=%d",mn);


}
