#include<stdio.h>
main()
{
    int i,r,s=0;
    scanf("%d",&i);

    while(i!=0)
    {
        r = i%10;
        i = i/10;
        printf("%d",r);
        s+=r;
    }

    printf("\n\ntotal = %d",s);
}
