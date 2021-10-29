# include<stdio.h>
main()
{
    int m,t=0,i=1,n;
    printf("How many numbers you want to add=");
    scanf("%d",&n);
    aaa:
    printf("Enter Number:");
    scanf("%d",&m);
    t=t+m;
    i=i+1;
    if(i<=n)
    {
    goto aaa;
    }
     printf("t= %d",t);
}
