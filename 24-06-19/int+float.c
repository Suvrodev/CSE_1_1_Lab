#include<stdio.h>
main()
{
    unsigned int m,f;
    float r;
    printf("enter percentage of female:");
    scanf("%d",&f);
     printf("enter percentage of male:");
    scanf("%d",&m);
    r= (float)f/m;
    printf("ratio= %.2f",r);
}

