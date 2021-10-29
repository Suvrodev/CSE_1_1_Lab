# include<stdio.h>
main()
{
    int m;
    char n;
    aaa:
    printf("Enter marks:");
    scanf("%d",&m);

    switch(m/10)
    {
    case 10:
          printf("A+");
          break;
    case 9:
          printf("A+");
          break;
    case 8:
          printf("A+");
          break;
    case 7:
          printf("A");
          break;
    case 6:
          printf("A-");
          break;
    default:
        printf("FAIL");
        break;
    }
    printf("\n\n Press y to continue and x to exit=");
    scanf(" %c",&n);
    if(n=='y')
    {
        goto aaa;
    }
}
