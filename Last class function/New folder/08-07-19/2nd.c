//6.1 programe
//3.11
#include<stdio.h>
main()
{
    int a,b,s=0;
    printf("Enter a value=");
    scanf("%d",&a);
    b=a%10;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        printf("%d",b);
        s=s+b;
    }
     printf("\nTotal=%d",s);
}
