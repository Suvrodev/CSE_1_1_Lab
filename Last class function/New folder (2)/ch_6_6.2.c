
#include<stdio.h>
main()
{
    int i,f=1;
    scanf("%d",&i);

    while(i>0)
    {
        f = f * i;
        i--;
    }

    printf("\n\Factorial = %d",f);
}
