//5.13
#include<stdio.h>
main()
{
            int  i,j=0,sum=0,m,n;
            printf("Enter the value of m=");
            scanf("%d",&m);
              printf("Enter the value of n=");
            scanf("%d",&n);


            for(i=m;i<=n;i++)
            {

               if(i%6==0 && i%4!=0)
               {
                  printf("\t%d",i);
               j++;
               sum=sum+i;
               }

            }
             printf("\n Number=%d",j);
            printf("\n Total value=%d",sum);
}

