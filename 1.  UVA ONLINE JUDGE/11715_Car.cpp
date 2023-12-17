//http://uva.onlinejudge.org/external/117/11715.html
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
double u,v,a,s,t,r;
int n,css=0;

while(cin>>n)
{
    css++;
    u=0;
    v=0;
    a=0;
    s=0;
    t=0;
    r=0;
    if(n==0) break;

    if(n==1)
    {
        cin>>u>>v>>t;
        a = (v-u)/t;
        s = u*t + .5*a*t*t;
        printf("Case %d: %.3lf %.3lf\n",css,s,a);
    }
    if(n==2)
    {
        cin>>u>>v>>a;
        t = (v-u)/a;
        s = u*t + .5*a*t*t;
        printf("Case %d: %.3lf %.3lf\n",css,s,t);
    }
    if(n==3)
    {
        cin>>u>>a>>s;
        r = u*u + 2*a*s;
        v = sqrt(r);
        t = (v-u)/a;
        printf("Case %d: %.3lf %.3lf\n",css,v,t);
    }
    if(n==4)
    {
        cin>>v>>a>>s;
        r = v*v - 2*a*s;
        u = sqrt(r);
        t = (v-u)/a;
        printf("Case %d: %.3lf %.3lf\n",css,u,t);
    }
}

return 0;
}
