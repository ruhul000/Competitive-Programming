//http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=24&problem=3001&mosmsg=Submission+received+with+ID+11673342
//Accepted
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
string s;
int i,l,r,sum;
while(getline(cin,s))
{
    r=0;
    l=s.size();
    if(l==1 && s[0]=='0') break;
    for(i=0;i<l;i++)
    {
        sum=r*10+(s[i]-'0');
        //cout<<"sum="<<sum<<endl;
        r=sum%17;
        //cout<<"r="<<r<<endl;
    }
    if(r==0)
    printf("1\n");
    else
    printf("0\n");


}

return 0;
}
