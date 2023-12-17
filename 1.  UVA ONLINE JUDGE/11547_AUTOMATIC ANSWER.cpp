//http://uva.onlinejudge.org/external/115/11547.html

//accepted

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i,T;

    long int n,result,tens_digit,temp;
    cin>>T;

    for(i=1; i<=T; i++)
    {
        tens_digit=0;
        result = 0;
        cin>>n;


        result = n * 567;
        result = result / 9;
        result = result + 7432;
        result = result * 235;
        result = result / 47;
        result = result - 498;

        temp = result % 100;

        tens_digit=temp/10;

        if(tens_digit<0)
            {
                cout<<tens_digit*-1<<endl;
            }
        else
            {
                cout<<tens_digit<<endl;
            }
    }

    return 0;
}
