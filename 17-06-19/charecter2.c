# include<stdio.h>
main()
{
    char c,s;
    int a,b,t;
    aaa:
     printf("Enter 1st  number:");
    scanf("%d",&a);

     printf("Enter symble:");
    scanf(" %c",&c);

     printf("Enter 2nd number:");
    scanf("%d",&b);

    if(c=='+')
    {
       t=a+b;
       printf("Result= %d",t);
    }
    else if(c=='-')
    {
       t=a-b;
       printf("Result= %d",t);
    }
    else if(c=='*')
    {
       t=a*b;
       printf("Result= %d",t);
    }
     else if(c=='/')
    {
       t=a/b;
       printf("Result= %d",t);
    }
    else
    {
     printf("Wrong symbol");
    }
     printf("\n\nType y to continue and x to esit=");
    scanf(" %c",&s);
    if(s=='y')
    {
        goto aaa;
    }


}
