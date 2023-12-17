//http://uva.onlinejudge.org/external/101/10192.html
//Accepted
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
int lcs[2000][2000];
int i,j,m,n;

int main()
{

string s1,s2;
int css=0;
while(getline(cin,s1))
	{
	    int l=s1.size();
	    if(l=1 && s1[0]=='#') break;
	    getline(cin,s2);
	    i=s1.size();
        j=s2.size();

        for(m=1;m<=i;m++)
        {
            for(n=1;n<=j;n++)
            {

                if(s1[m-1]==s2[n-1])
                lcs[m][n]=lcs[m-1][n-1]+1;
                else
                lcs[m][n]=max(lcs[m-1][n],lcs[m][n-1]);
            }
        }
        cout<<"Case #"<<++css<<": you can visit at most "<<lcs[i][j]<<" cities."<<endl;
	}

return 0;
}

