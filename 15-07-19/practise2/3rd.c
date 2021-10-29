#include<stdio.h>
main()
{
    int i,a[10]={12,354,21,-56,-65,-150,245,987,566,784},b=0,d=0;
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            b++;
        if(a[i]%2!=0)
            d++;
    }
    printf("Even Nuber is= %d",b);
    printf("\nOdd Number is =%d",d);
}
