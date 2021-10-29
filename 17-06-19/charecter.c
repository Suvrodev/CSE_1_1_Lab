#include<stdio.h>
main()
{
    char c;
    int a,b,t;
    printf("Enter 1st number and symbol & 2nd:");
    scanf("%d %c %d",&a,&c,&b);
    if(c=='+')
    {
       t=a+b;
    }
    else if(c=='-')
    {
       t=a-b;
    }
    else if(c=='*')
    {
       t=a*b;
    }
    else
    {
       t=a/b;
    }
    printf("Result= %d",t);

}
