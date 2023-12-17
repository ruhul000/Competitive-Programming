//http://uva.onlinejudge.org/external/115/11597.html
//Accepted

#include<iostream>
using namespace std;

int main()
{
    int vrtx,css=0;

    while(cin>>vrtx)
    {
        css++;
        if(vrtx==0)
        {
            break;
        }
        else
        {
            cout<<"Case "<<css<<": "<<vrtx/2<<endl;
        }
    }
    return 0;
}
