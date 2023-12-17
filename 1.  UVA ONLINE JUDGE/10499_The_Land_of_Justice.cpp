//http://uva.onlinejudge.org/external/104/10499.html
//Accepted
#include<iostream>
using namespace std;

int main()
{
    long long int N;

    while(cin>>N)
    {
        if(N<0)
        {
            break;
        }
        else if(N==1)
        {
            cout<<0<<"%"<<endl;
        }
        else
        {
            cout<<N*25<<"%"<<endl;
        }
    }

    return 0;
}
