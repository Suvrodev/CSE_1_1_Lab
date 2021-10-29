#include<stdio.h>
main()
{
            int  i,j=0,k=0,m,n;
            scanf("%d %d",&m,&n);
            for(i=m;i<=n;i++)
            {

               if(i%6==0 && i%4!=0)
               {
                  printf("\t%d",i);
               j++;
               k=k+i;
               }
            }
             printf("\n Number=%d",j);
            printf("\n Number=%d",k);
}
