#include<stdio.h>
main()
{
    int i,b=0,c=55,a[8];
    for(i=0;i<8;i++)

    {
        scanf("%d",&a[i]);
    }
 for(i=0;i<8;i++)
 {
     if(a[i]==55)
        b++;
 }
 if(b==0)
 {
     printf("You have lose the game");
 }
 else
 {
     printf("You have won The game");
 }
}
