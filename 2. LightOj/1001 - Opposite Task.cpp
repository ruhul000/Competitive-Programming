//http://lightoj.com/volume_showproblem.php?problem=1001
//Accepted

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t,n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
        else cout<<n/2<<" "<<(n/2)+1<<endl;
    }

    return 0;
}
