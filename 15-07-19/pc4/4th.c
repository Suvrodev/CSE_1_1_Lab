#include<stdio.h>
main()
{
    int i,d=50,c=0,a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
    if(a[i]==50)
        c++;
    }
    if(c==0)
        printf("You have Lose The game");
        else
        printf("You have Won The game");
}
