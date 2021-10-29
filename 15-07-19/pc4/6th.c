#include<stdio.h>
main()
{
    int i,j,k,a[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    for(i=0;i<15;i++)
    {
        for(k=0;k<10000;k++)
        {
            for(j=0;j<10000;j++)
                printf("");
        }
        printf(" %d",a[i]);

    }
}
