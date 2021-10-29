#include<stdio.h>
main()
{
    int i,a[100]={12,354,21,-56,-65,-150,245,987,566,784},b=0,c=0;
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            b++;
        }
        if(a[i]%2!=0)
        {
            c++;
        }
    }
    printf("Even Number=%d",b);
    printf("\nOdd Number=%d",c);
}
