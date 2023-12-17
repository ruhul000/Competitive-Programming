//http://uva.onlinejudge.org/external/109/10921.html

//accepted

#include <stdio.h>

int main()
{
    char a;
    while ((a=getchar())!=EOF)
    {
        if(a =='A' || a == 'B' || a == 'C')
        {
            printf("2");
        }
        else if(a =='D' || a == 'E' || a == 'F')
        {
            printf("3");
        }
        else if(a =='G' || a == 'H' || a == 'I')
        {
            printf("4");
        }
        else if(a =='J' || a == 'K' || a == 'L')
        {
            printf("5");
        }
        else if(a =='M' || a == 'N' || a == 'O')
        {
            printf("6");
        }
        else if(a =='P' || a == 'Q' || a == 'R' || a == 'S')
        {
            printf("7");
        }
        else if(a =='T' || a == 'U' || a == 'V')
        {
            printf("8");
        }
        else if(a =='W' || a == 'X' || a == 'Y' || a == 'Z')
        {
            printf("9");
        }
        else
        {
            printf("%c",a);
        }
    }
    return 0;
}
