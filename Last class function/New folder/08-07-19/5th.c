#include<stdio.h>
main()
{

    int a=0,b=0,c=0,d=0,e=0,f=0,m,i=1,s;
    printf("How many students number do you want to show=");
    scanf("%d",&s);
    while(i<=s)
    {
        printf("Give marks=");
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
         else if(m<0 && m>100)
        {
          e++;
        }
        else
        {

        }
        i = i + 1;
    }
    printf("%d-(80-100)\n%d-(60-80)\n%d-(40-60)\n%d students less 40\n%d students got wrong marks\n",a,b,c,d,e);


}
