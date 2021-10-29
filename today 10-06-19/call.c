#include<stdio.h>
main()
{
    float call,total;
    printf("Enter call number:");
    scanf("%f",&call);
    if(call>100)
    {
        total=total+(call-100)*1.25;
    }
        if(call<100)
    {
        total=250;
    }
    printf("Total month bill is %f", total);
}
