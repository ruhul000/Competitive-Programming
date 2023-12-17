//http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=854
//Accepted;
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    unsigned long int m,n,s,sum,a,b,c;
    int i;

    while(scanf("%lu",&n)!=EOF)
    {
        s=0;a=0;b=0;c=0;sum=0;
        s=(n+2)/2;
        a=1+((s*s)-1)*2;
        //b=a-2;
        //c=b-2;

        //cout<<a<<" "<<b<<" "<<c<<endl;
        //sum=a+b+c;

        printf("%lu\n",a*3-6);
    }

return 0;
}










/*#include <cstdio>


typedef long long i64;


i64 n;


int main()
{
    while (true) {
        if (scanf("%lld", &n) != 1) break;

        i64 l = n + (n - 1) * ((n - 1) / 2 + 1);
        printf("%lld\n", 3*l - 6);
    }

    return 0;
}*/
