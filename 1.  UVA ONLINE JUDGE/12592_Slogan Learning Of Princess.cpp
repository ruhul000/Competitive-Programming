//http://uva.onlinejudge.org/external/125/12592.html
//Accepted

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    string s1[200],s2[200],s;
    int i,n,q;

    while(cin>>n)
    {
        getchar();
        for(i=0; i<n; i++)
        {
            getline(cin,s1[i]);
            getline(cin,s2[i]);
        }
        cin>>q;
        getchar();
        while(q--)
        {
            getline(cin,s);
            for(i=0; i<n; i++)
            {
                if(s1[i]==s)
                {
                    cout<<s2[i]<<endl;
                }
            }

        }
    }


return 0;
}
