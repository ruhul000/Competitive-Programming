//http://www.lightoj.com/practice_contest_showproblem.php?contest_id=77&problem=A

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int i,T,N,K;

    cin>>T;

    for(i=1; i<=T; i++)
    {
        cin>>N>>K;
        cout<<"Case "<<i<<": "<<N/K<<endl;
    }



    return 0;
}
