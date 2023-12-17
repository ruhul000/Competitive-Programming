//Binary to Decimal
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    char bin[32];
    int i=0,len=0,r=0,w;
    printf("Enter a Binary Number :: ");
    scanf("%s",bin);
    printf("\n");

    len = strlen(bin);

    for(i = 0; i < len; i++)
    {
        //r = r * 2 + (bin[i] == '1' ? 1 : 0);
        if(bin[i]=='1')
        {
            r = r * 2 + 1;
            cout<<r<<endl;
        }
        else
        {
            r=r*2+0;
            cout<<r<<endl;
        }
    }
    printf("Decimal is :: %d\n",r);

return 0;
}
