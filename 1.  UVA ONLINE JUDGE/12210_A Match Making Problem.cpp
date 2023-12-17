//http://uva.onlinejudge.org/external/122/12210.html
//Accepted
#include<iostream>
using namespace std;

int main()
{
    int b,s,i,css=0,min,loc;
    int B[10000],S[10000];

    while(cin>>b>>s)
    {
        if(b==0&&s==0) break;
        css++;
        for(i=0; i<10000; i++)
        {
            B[i]=0;
        }

        for(i=0; i<b; i++)
        {
            cin>>B[i];
        }
        for(i=0; i<s; i++)
        {
            cin>>S[i];
        }

        if(b<=s)
        {
            cout<<"Case "<<css<<": 0\n";
        }
        else
        {
            min=60;
            loc=0;
            for(i=0;i<b;i++)
            {
                if(min>B[i])
                {
                    min=B[i];
                    loc=i;
                }
            }
            b=b-s;
            cout<<"Case "<<css<<": "<<b<<" "<<B[loc]<<endl;
        }
    }
}
