//http://uva.onlinejudge.org/external/118/11805.html
//Accepted
/*#include <iostream>
using namespace std;

int main()
{
    int n,k,p,l,i,t,css;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        l=0;
        cin>>n>>k>>p;
        l=k+p;

        while(n<l)
        {
            l=l-n;
        }
        cout<<"Case "<<i<<": "<<l<<endl;
    }

    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    int n,k,p,l,i,t,css;

    cin>>t;
    for(i=1; i<=t; i++)
    {
        l=0;
        cin>>n>>k>>p;
        l=k+p;

        if(l%n==0)
        {
            l=n;
        }
        else{
            l=l%n;
        }
        cout<<"Case "<<i<<": "<<l<<endl;
    }

    return 0;
}








/*#include<stdio.h>
int main()
{
int n,k,p,a,s,i;
while(scanf("%d",&a)==1)
{
for(i=1;i<=a;i++)
 {
 scanf("%d%d%d",&n,&k,&p);
 s=k+p;
 while(s>n)
  {
      s=s-n;
      printf("::s::%d",s);
      }
 printf("Case %d: %d\n",i,s);
 }
}
return 0;
}*/

