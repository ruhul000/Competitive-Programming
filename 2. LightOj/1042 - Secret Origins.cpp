//http://lightoj.com/volume_showproblem.php?problem=1042
//TLE
#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;



int find(long int n)
{
    int b[32],i,k,count;
        count=0;
        k=n;
        for(i=0;i<=k;i++)
        {
            b[i]=n%2;
            if(b[i]==1) count++;
            n=n/2;
            if(n==0)break;
        }
    return count;
}


int main()
{
    long int css=0,t,i,n,k,count=0,c,b[32],l=0;
    cin>>t;
    while(t--)   // n = Decimal number
    {
        css++;
        cin>>n;
        count=0;
        c=0;
        k=n;

        for(i=0;i<=k;i++)
        {
            b[i]=n%2;
            if(b[i]==1) count++;
            n=n/2;
            if(n==0)break;
        }
        //cout<<count<<endl;
        l=k;
        while(1)
        {
            l++;
            c=find(l);
            //cout<<c<<endl;
            if(c==count)
            {
                cout<<"Case "<<css<<": "<<l<<endl;
                break;
            }
        }


    }
return 0;
}
