#include<stdio.h>
main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>=0)
    {
        printf("%d is a possitive number",x);
    }
else
    {
        printf("%d is a Negative number",x);
    }
}
