//acm.hdu.edu.cn/showproblem.php?pid=1004
//1004 Let the Balloon Rise

//accepted

#include <stdio.h>
#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string,int>m;

int main()
{
    int n,max;
    string str,str1;

    while(scanf("%d", &n) && n!=0)
    {
        max=0;
        m.clear();
        while(n--) {
            cin>>str;
            m[str]++;
            if(max<m[str]) {
                str1=str;
                max=m[str];
            }
        }
        cout<<str1<<endl;
    }


    return 0;
}
