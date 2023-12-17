//http://uva.onlinejudge.org/external/113/11369.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    long long i,t,n,price[50000],dis;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>price[i];
        }
        sort(price,price+n);
        dis=0;
        for(i=n-3; i>=0; i-=3)
        {
            dis+=price[i];
        }
        cout<<dis<<endl;

    }

    return 0;
}
