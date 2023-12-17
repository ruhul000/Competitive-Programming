//http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=399

#include <iostream>
using namespace std;
//Accepted

int main()
{
    char ch;

    while((ch = getchar()) != EOF)
    {
        if(ch==10)
        {
            printf("\n");
        }
        else
        {
            printf("%c",ch-7);
        }
    }
    return 0;
}
