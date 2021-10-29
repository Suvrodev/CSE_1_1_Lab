#include<stdio.h>
int sum(int a, int b);
main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=sum(a,b);
    printf("%d",c);
}
int sum(int a, int b)
{
    int c;
    c=a+b;
    return(c);
}
/*#include<stdio.h>
int sum(int a, int b);
main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = sum(a,b);
    printf("%d",c);
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
*/
