#include<stdio.h>
main()
{
    int i,c,d,a[5]={1,2,3,4,5};
    for(i=0;i<5;i++)
    {
        for(c=0;c<10000;c++)
        {
            for(d=0;d<10000;d++)
                printf("");
        }

        printf("%d      ",a[i]);
    }
}
