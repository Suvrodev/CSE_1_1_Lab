#include<stdio.h>
int power();
main()
{
    int a,b,c;
    //scanf("%d %d",&a,&b);
    c = power();
    printf("%d",c);
}
int power()
{
    int a,b,c;
    int i,p=1;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        p = p * a;
    }
    return p;
}

