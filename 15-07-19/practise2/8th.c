#include<stdio.h>
main()
{
    int i,j,k,a[11]={1,2,3,4,5,6,7,8,9,10,11};
    for(i=0;i<=10;i++)
    {
        for(j=0;j<=100000;j++)
            {
                for(k=0;k<=10000;k++)
                    printf("");
            }
            printf(" %d",a[i]);
    }

}
