#include<stdio.h>
main()
{
    int f,r,d,i=0,j,m;
    printf("From=");
    scanf("%d",&f);
    printf("Reached");
    scanf("%d",&r);
    printf("Distance");
    scanf("%d",&d);
    q:
    j=f+i;
    printf("%d",j);
    i=i+d;
    if(i<r)
    {
        goto q;
    }


}
