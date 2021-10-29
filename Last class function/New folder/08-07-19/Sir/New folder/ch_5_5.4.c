#include<stdio.h>
main()
{
    int a=0,b=0,c=0,d=0,e=0,m,i=1;
    while(i<=5)
    {
        scanf("%d",&m);
        if(m>80 && m<=100)
        {
          a++;
        }
        else if(m>60 && m<=80)
        {
            b++;
        }
        else if(m>40 && m<=60)
        {
            c++;
        }
         else if(m>0 && m<=40)
        {
            d++;
        }
        else
        {
            e++;
        }
        i = i + 1;
    }
    printf("%d students got more than 80\n%d students got more than 60\n%d students got more than 40\n%d students got less than 40\n%d students got wrong marks\n",a,b,c,d,e);


}
