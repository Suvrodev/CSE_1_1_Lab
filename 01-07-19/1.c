#include<stdio.h>
main()
{
    int a,b,i=1,s=0;
    printf("How many Number=");
    scanf("%d",&a);
    q:
    printf("Enter a Number=");
    scanf("%d",&b);
    s=b+s;
    i=i+1;
    if(i<=a)
    {
        goto q;
    }

   printf("total=%d",s);
}
