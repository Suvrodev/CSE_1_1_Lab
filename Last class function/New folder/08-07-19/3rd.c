//factorial
#include<stdio.h>
main()
{
    int a,b=1;
    printf("Give here value=");
    scanf("%d",&a);
    while(a>0)
    {
        b=a*b;
        a--;
    }
    printf("\nFactorial of this number=%d",b);
}
