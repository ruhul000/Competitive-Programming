#include<iostream>
#include<cstring>
#include<cmath>
#include<stdio.h>

using namespace std;

int main()
{
	char ch[100000];
	long long i,j,k,l,xtra,m,n,p;
	cin>>n;
	for(p=1;p<=n;p++)
	{
        cin>>ch>>xtra;
        /*for(i=0; i<250; i++)
        {
            ch[i]=0;
        }*/
        l=strlen(ch);

        k=0;
        if(xtra<0)
        {
            xtra=xtra*-1;
        }
        if(ch[0]=='-')
        {
            k=(k+ch[1]-48)%xtra;
            for(i=1; i<l-1; i++)
            {
                k=(k*10+ch[i+1]-48)%xtra;
            //cout<<k<<endl;
            }
        }
        else
        {
            k=(k+ch[0]-48)%xtra;
            for(i=0; i<l-1; i++)
            {
                k=(k*10+ch[i+1]-48)%xtra;
            //cout<<k<<endl;
            }
        }
        if(k==0)
        {
            printf("Case %d: divisible\n",p);
        }
        else
        {
            printf("Case %d: not divisible\n",p);
        }
	}
	return 0;
}
