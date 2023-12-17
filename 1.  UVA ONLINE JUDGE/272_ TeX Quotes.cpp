//http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208

#include <stdio.h>

//Accepted

int main()
{
    char ch;
    int count=0;

    while((ch=getchar()) != EOF)
    {
        if(ch==34)
        {
            count++;

            if(count%2!=0)
            {
                printf("``");
            }
            else
            {
                printf("''");
            }
        }
        else
        printf("%c",ch);
    }
    return 0;
}

/*#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    int i=0;
    while((ch=getc(stdin))!=EOF)
    {
         if((int)ch==34)
         {
            if (i==0)
            {
                printf("``");
                i=1;
            }
            else if(i==1)
            {
                printf("''");
                i=0;
            }
         }
         else printf("%c",ch);
    }
    return 0;
}*/
