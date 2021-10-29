#include<stdio.h>
main()
{
    int i,b=0,c=0,a[8]={23,54,75,89,101,-47,-50,244};
    for(i=0;i<8;i++)
    {
        if(a[i]%2==0)
            b++;
        else
            c++;

    }
    printf("Even number is=%d",b);
    printf("\nOdd number is=%d",c);
}
