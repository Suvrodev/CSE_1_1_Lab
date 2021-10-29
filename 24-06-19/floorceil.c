#include<stdio.h>
main()
{
    float a;
    int b,c;
    printf("Enter the number");
    scanf("%f",&a);
    b=floor(a);
    c=ceil(a);
    printf("%d %f %d",b,a,c);
}
