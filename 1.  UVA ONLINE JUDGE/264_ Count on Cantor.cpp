//http://uva.onlinejudge.org/external/2/264.html
//ACCEPTED
/*#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    long long n[100000],d[100000];
    long long i,j,loc=0,loc1=0;
    long long a;
    n[1]=1;
    d[1]=1;

    for(i=1; i<400; i++)
    {
        if(i%2!=0)
        {
            for(j=1; j<=i; j++)
            {
                loc++;
                n[loc]=j;
                //cout<<n[loc]<<" ";
            }
            for(j=i-1; j>=1; j--)
            {
                loc++;
                n[loc]=j;
                //cout<<n[loc]<<" ";
            }
        }
        else
        {
            for(j=1; j<=i; j++)
            {
                loc1++;
                d[loc1]=j;
                    //cout<<d[loc1];
            }
            for(j=i-1; j>=1; j--)
            {
                loc1++;
                d[loc1]=j;
                    //cout<<d[loc1];
            }
        }
        //cout<<endl;
    }



       // cout<<endl;

    //cout<<loc<<" "<<loc1<<endl;
    /*for(i=1; i<9999; i++)
        {
            cout<<d[i]<<" ";
        }*/
    //cout<<n[99]<<" "<<d[99]<<endl;

    /*while(cin>>a)
    {
        cout<<"TERM "<<a<<" IS "<<n[a]<<"/"<<d[a]<<endl;
    }

    return 0;
}*/
#include <cmath>
#include <cstdio>

int t;
int a, b; // numerator and denominator of the answer

void solve()
{
    // number of the diagonal in Cantor's series
    int diag = ceil(sqrt(0.25 + 2*t) - 0.5);

    // number of the term inside the diagonal
    int n = t - (diag-1)*diag / 2;
    if (diag % 2 == 0) {
        a = n;
        b = diag + 1 - n;
    }
    else {
        a = diag + 1 - n;
        b = n;
    }
}

int main()
{
    while (true) {
        if (scanf("%d", &t) != 1) break;

        solve();
        printf("TERM %d IS %d/%d\n", t, a, b);
    }

    return 0;
}
