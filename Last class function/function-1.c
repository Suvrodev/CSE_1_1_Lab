#include<stdio.h>
void printline();
main()
{
    printline();
    printline();
    printline();
    printline();
    printline();
    printline();
}
void printline()
{
    int i;
    static int p=1;
    char ch='@';
    //scanf(" %c",&ch);
    printf("%d\n",p);
    p++;
    for(i=0;i<65;i++)
    {
        printf("%c",ch);
    }
    printf("\n");
}
