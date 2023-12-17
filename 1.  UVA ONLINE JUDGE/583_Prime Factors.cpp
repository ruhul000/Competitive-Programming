//http://uva.onlinejudge.org/external/5/583.html
//Accepted

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

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)

#define ff first
#define se second
#define inf (1<<30)                                              //infinity value
#define pb push_back
#define mod  1000000007
#define ST(v) sort(v.begin(),v.end())
#define cover(a,d) memset(a,d,sizeof(a))
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define maxall(v) *max_element(v.begin(),v.end())
#define minall(v) *min_element(v.begin(),v.end())
#define un(v) ST(v), v.erase(unique(v.begin(),v.end()),v.end())

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        pf("%d = ",n);
        if(n<0)
        {
            pf("-1 x ");
            n=-1*n;
        }
        int l=sqrt(n);
        //cout<<"L="<<l<<endl;
        for(int i=2;i<=l;i++)
        {
            //cout<<"i= "<<i<<endl;
            while(n%i==0)
            {
            //cout<<"n= "<<n<<endl;
               pf("%d",i);
               n=n/i;
               if(n>1)
                pf(" x ");
            }
        }
        if(n>1)
        pf("%d",n);
        pf("\n");

    }

    return 0;
}
