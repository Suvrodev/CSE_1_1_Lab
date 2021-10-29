#include<stdio.h>
main()
{
    int i,a[10]={12,354,21,-56,-65,-150,245,987,566,784};
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            continue;
        }

        printf(" %d",a[i]);
    }
}
