//http://uva.onlinejudge.org/external/119/11900.html
//Accepted
#include<iostream>
using namespace std;

int main()
{
int t,i,n,p,q,w8[100],css=0,sum=0,mx;
cin>>t;
while(t--)
{
    mx=0;
    sum=0;
    css++;
    cin>>n>>p>>q;
    for(i=0; i<n; i++)
    {
        cin>>w8[i];
    }
    for(i=0;i<n && i<p; i++)
    {
        sum = sum + w8[i];

        if(sum>q)
        {
            break;
        }
        mx++;
    }
    cout<<"Case "<<css<<": "<<mx<<endl;

}

return 0;
}
