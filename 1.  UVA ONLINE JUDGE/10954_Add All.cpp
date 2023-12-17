//http://uva.onlinejudge.org/external/109/10954.html
//Accepted

#include <cstdio>
#include <set>
using namespace std;


typedef long long i64;
typedef multiset<i64> IS;


int N;
IS s;


i64 solve()
{
    i64 cost = 0;
    while (true) {
        i64 a = *(s.begin());
        s.erase(s.begin());
        i64 b = *(s.begin());
        s.erase(s.begin());
        cost += a + b;

        if (s.size() == 0) break;
        s.insert(a + b);
    }
    return cost;
}

int main()
{
    while (true) {
        scanf("%d", &N);
        if (N == 0) break;

        s = IS();
        while (N--) {
            int n;
            scanf("%d", &n);
            s.insert(n);
        }
        printf("%lld\n", solve());
    }

    return 0;
}



/*#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    long long int T,a[5000],i,n,b,cost[5000];

    while(cin>>T)
    {
        n=0;
        for(i=0; i<T; i++)
        {
            cost[i]=0;
        }
        if(T==0) break;
        else
        {

            for(i=0; i<T; i++)
            {
                cin>>a[i];
            }

            sort(a,a+i);

            for(i=0; i<T-1; i++)
            {
                cost[i]=a[i+1]=a[i]+a[i+1];

                //sort(a+i+1,a+T);

                /*cout<<"sort: ";
                for(int j=0; j<T; j++)
                {
                    cout<<a[j]<<" ";
                }
                cout<<endl;*/
  //          }

            /*for(i=0; i<T-1; i++)
            {
                cout<<cost[i]<<" ";
                if(cost[i]==0){break;}
            }
            cout<<endl<<i<<endl;*/

    /*        for(i=0; i<T-1; i++)
            {
               n=n+cost[i];
            }
            cout<<n<<endl;
        }
    }
    return 0;
}*/

