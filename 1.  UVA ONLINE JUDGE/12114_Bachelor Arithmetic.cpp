//http://uva.onlinejudge.org/external/121/12114.html
//Accepted
#include<iostream>
using namespace std;

int main()
{
    long long B,S,css=0;
    while(cin>>B>>S)
    {
        css++;
        if(B==0 && S==0) break;
        if(B==0 || B==1)
        {
            cout<<"Case "<<css<<": :-\\"<<endl;
        }
        else if(B<=S)
        {
            cout<<"Case "<<css<<": :-|"<<endl;
        }
        else if(B>S)
        {
            cout<<"Case "<<css<<": :-("<<endl;
        }
    }

    return 0;
}
