#include<stdio.h>
main()
{
    int i,a[10],b=245,d=0;
    printf("Enter 10 numbers=");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i]==245)
            d++;
    }
        if(d==0)
            printf("You have Lose the game");
        else
              printf("You have Won the game");

}
