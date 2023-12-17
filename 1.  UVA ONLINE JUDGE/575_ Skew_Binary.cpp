//http://uva.onlinejudge.org/external/5/575.html
//Accepted
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main()
{
    char bin[40];
    int i=0,len=0,r=0,power=0;

    while((cin>>bin))
    {
        len=0,r=0,power=0;
        len = strlen(bin);
        power = len;
        if(len==1 && bin[0]==48)
        {
            break;
        }
        else
        {
            for(i = 0; i <= len; i++)
            {
                if(bin[i]=='1')
                {
                    r = r + 1 * (pow(2,power) - 1);
                }
                else if(bin[i]=='2')
                {
                    r = r + 2 * (pow(2,power) - 1);
                }
                else if(bin[i]=='0')
                {
                    r = r + 0 * (pow(2,power) - 1);
                }
                /*
                Aituk na korleo hobe..:)
                else if(bin[i]=='3')
                {
                    r = r + 3 * (pow(2,power) - 1);
                }
                else if(bin[i]=='4')
                {
                    r = r + 4 * (pow(2,power) - 1);
                }
                else if(bin[i]=='5')
                {
                    r = r + 5 * (pow(2,power) - 1);
                }
                else if(bin[i]=='6')
                {
                    r = r + 6 * (pow(2,power) - 1);
                }
                else if(bin[i]=='7')
                {
                    r = r + 7 * (pow(2,power) - 1);
                }
                else if(bin[i]=='8')
                {
                    r = r + 8 * (pow(2,power) - 1);
                }
                else if(bin[i]=='9')
                {
                    r = r + 9 * (pow(2,power) - 1);
                }*/
                power--;
            }
            cout<<r<<endl;
        }


    }


return 0;
}

