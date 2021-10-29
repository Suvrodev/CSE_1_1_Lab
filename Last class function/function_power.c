#include<stdio.h>
void power();
main()
{
    //int a,b,c;
    //scanf("%d %d",&a,&b);
    power();
    //printf("%d",c);
}
void power()
{
    int a,b,c;
    int i,p=1;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        p = p * a;
    }
    printf("%d",p);
}

