//http://uva.onlinejudge.org/external/105/10591.html
//Accepted

/*#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    long long N,t,css=0,a,sum,temp;
    cin>>t;

    while(t--)
    {
        css++;
        cin>>N;
        //temp=N;
        //N=N*N;
        if(N==7)
        {
            cout<<"Case #"<<css<<": "<<N<<" is a Happy number."<<endl;
        }
        else
        {
            while(1)
            {
                if(N==1)
                {
                    cout<<"Case #"<<css<<": "<<N<<" is a Happy number."<<endl;
                    break;
                }
                else if(N<=9)
                {
                    cout<<"Case #"<<css<<": "<<N<<" is a Unhappy number."<<endl;
                    break;
                }
                else
                {
                    sum=0;
                    while(N!=0)
                    {
                        a=N%10;
                        sum+=(a*a);
                        N/=10;
                    }
                    N=sum;
                    //cout<<sum<<endl;
                }
            }
        }


    }

return 0;
}*/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<cassert>
#include<sstream>
#include<fstream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<complex>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<deque>
#include<list>
#include<set>
#include<map>

#define ll long long
#define sc scanf
#define pf printf
#define pi 2*acos(0.0)

#define ft first
#define se second
#define r(input) freopen("input.txt","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define Sort(v) sort(v.begin(),v.end())
#define un(v) Sort(v), v.erase(unique(v.begin(),v.end()),v.end())
#define cover(a,d) memset(a,d,sizeof(a))

using namespace std;

ll happy(ll n)
{
    ll s=0;
    if(n<=9)
        return n;
    while(n!=0)
    {

        s+=((n%10)*(n%10));
        n/=10;
    }
    happy(s);
}

int main()
{
    int t,no=0;
    sc("%d",&t);
    while(t--)
    {
        ll n;
        sc("%lld",&n);
        if(n==7)
        {
            pf("Case #%d: %lld is a Happy number.\n",++no,n);
        }
        else if(happy(n)==1)
        {
            pf("Case #%d: %lld is a Happy number.\n",++no,n);
        }
        else
        {
             pf("Case #%d: %lld is an Unhappy number.\n",++no,n);
        }

    }
    return 0;

}
