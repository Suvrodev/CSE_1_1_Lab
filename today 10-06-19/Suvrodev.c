#include<stdio.h>
main()
{
    int x;
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("%d is a even number",x);
    }
    /*ইফের পরে ব্রাকেটের ভিতরের অংশটা True value*/


    if(x%2==1)
    {
        printf("%d is a odd number",x);
    }
    printf("\n\n End of the program......");

}
