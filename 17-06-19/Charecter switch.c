# include<stdio.h>
main()
{
    char c;
    int a,b,t;
   printf("Enter 1st number and symbol and 2nd number:");
    scanf("%d %c %d",&a,&c,&b);
    switch(c)
    {
case '+':
         t=a+b;
       printf("Result= %d",t);
       break;
    case '-':
         t=a-b;
       printf("Result= %d",t);
       break;
    case '*':
         t=a*b;
       printf("Result= %d",t);
       break;
    case '/':
         t=a/b;
       printf("Result= %d",t);
       break;
       default:
       break;

    }
}
