//http://acm.hdu.edu.cn/showproblem.php?pid=1013
//Accepted
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    string s;
    while(cin>>s)
    {
        int l=s.size();
        if(s[0]=='0'&&l==1) break;

        n=0;
        for(int i=0;i<l;i++)
        {
            n+=s[i]-'0';
        }

        while(n>9)
        {
            n=n%10+n/10;
        }

        cout<<n<<endl;
    }
    return 0;
}
