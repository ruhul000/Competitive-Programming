//=======Counting Sort==========//
//=======Complexity = n=========//

#include<iostream>
using namespace std;
//data[]={3,6,4,1,3,4,1,4};
int main()
{
    int i,j,max=0,c[100],data[100],n;

    for(i=1; i<=100; i++)
    {
        c[i]=0;
    }

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>data[i];
    }

    for(i=1; i<=n; i++)
    {
        if(max<data[i])
        {
            max=data[i];
        }
    }
    cout<<max<<endl;

    for(i=1; i<=n; i++)
    {
        cout << c[data[i]]++<<" ";
    }
    cout<<endl;

    for(i=1; i<=max; i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;


    for(i=1; i<=max; i++)
    {
        for(j=1; j<=c[i]; j++)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
