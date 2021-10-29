#include<stdio.h>
main()
{
    int i,a[8]={23,54,75,89,101,-47,-50,244};
    for(i=0;i<8;i++)
    {
        if(a[i]%2==0)
        {
            continue;
        }

        printf("\t%d",a[i]);
    }
}
