//http://uva.onlinejudge.org/external/5/530.html
//Accepted

#include<stdio.h>

long long nCr(long long n,long long m)
{
    long long res=1,i;
    if(n-m<m)
    m=n-m;
    for(i=1;i<=m;i++,n--)
    {
        res=res*n;
        res=res/i;
    }
    return res;
}

int main()
{
    long long p,q,r,s;
    double x;
    while(scanf("%lld%lld&lld&lld",&p,&q,&r,&s)==4)
    {
        x = nCr(p,q)/nCr(r,s);
        if(x<100000000) printf("%.5lld\n",x);
    }
return 0;
}
