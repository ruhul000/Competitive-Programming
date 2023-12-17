//http://uva.onlinejudge.org/external/4/406.html
//Accepted
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

int P[10000];
int Num[10000];

int prime(int n)
{
	int i,j,k,pos;

	for(i=1; i<=n; i++)
	{
		P[i]=1;
		Num[i]=0;
	}

	for(i=2; i<=(int)sqrt(n); i++)
	{
		if(P[i]==1)
		{
			for(j=(i*i); j<=n; j=j+i)
			{
				P[j]=0;
			}
		}
	}

    k=1;
	for(i=1; i<=n; i++)
	{
		if(P[i]==1)
		{
		    Num[k]=i;
		    k++;
		}
	}

	//cout<<k<<endl;

	return k-1;
}

int main()
{
    int i,n,c,size,mid,r;

    while(scanf("%d%d",&n,&c)==2)
    {

        size=prime(n);

        //cout<<size<<endl;
        cout<<n<<" "<<c<<":";
        if(size<=c*2 || n<=c)
        {

            for(i=1; i<=size; i++)
            {
                cout<<" "<<Num[i];
            }
        }
        else if((size&1)==0)
        {
            mid=size/2;

            //cout<<n<<" "<<c<<": ";
            for(i=mid-(c-1); i<=mid+c; i++)
            {
                cout<<" "<<Num[i];
            }
        }
        else if((size&1)==1)
        {
            mid=(size/2)+1;
            r=c-1;

            //cout<<n<<" "<<c<<": ";
            for(i=mid-r; i<=mid+r; i++)
            {
                cout<<" "<<Num[i];
            }
        }
        cout<<endl<<endl;
    }

	return 0;
}

/*#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;


typedef vector<int> IV;
typedef IV::iterator IVi;


//
// Number Theory
//
#define IsComp(n) (_c[n>>6]&(1<<((n>>1)&31)))
#define SetComp(n) _c[n>>6]|=(1<<((n>>1)&31))
namespace Num
{
    const int MAX = 1000; // 10^6
    const int LMT = 32; // sqrt(MAX)
    int _c[(MAX>>6)+1];
    IV primes;
    void prime_sieve() {
        for (int i = 3; i <= LMT; i += 2)
            if (!IsComp(i)) for (int j = i*i; j <= MAX; j+=i+i) SetComp(j);
        primes.push_back(1); // Yuck! Just for this problem
        primes.push_back(2);
        for (int i=3; i <= MAX; i+=2) if (!IsComp(i)) primes.push_back(i);
    }
}
using namespace Num;


int N, C;


int main()
{
    prime_sieve();

    while (true) {
        if (scanf("%d%d", &N, &C) != 2) break;

        printf("%d %d:", N, C);
        IVi it = upper_bound(primes.begin(), primes.end(), N);
        int cnt = (it - primes.begin());

        int from, to;
        if (cnt % 2 == 0) {
            from = max(cnt / 2 - C, 0);
            to = min(cnt / 2 + C, cnt);
        }
        else {
            from = max((cnt + 1) / 2 - C, 0);
            to = min(cnt / 2 + C, cnt);
        }

        for (int i = from; i < to; ++i)
            printf(" %d", primes[i]);
        printf("\n\n");
    }

    return 0;
}*/
