# include<stdio.h>
main()
{
    int m;
    printf("Enter marks:");
    scanf("%d",&m);

    switch(m/10)
    {
    case 10:

    case 9:

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
           break;
    }
}

