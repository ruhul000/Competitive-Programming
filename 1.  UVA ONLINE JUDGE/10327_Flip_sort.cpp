//http://uva.onlinejudge.org/external/103/10327.html
//Accepted
#include<iostream>
using namespace std;

int main()
{
    int a[1005];
    int i,j,temp,n,meo;

    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        meo=0;

        for(i=0; i<n; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
                    meo++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<meo<<endl;
    }

    return 0;
}


