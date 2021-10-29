#include<stdio.h>
main()
{
    int a[100]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},i,j,k;
    for(i=0;i<20;i++)
    {
        for(j=0;j<=10000;j++)
        {
            for(k=0;k<=100000;k++)
                printf("");
        }
        printf("\t%d",a[i]);
    }
}
