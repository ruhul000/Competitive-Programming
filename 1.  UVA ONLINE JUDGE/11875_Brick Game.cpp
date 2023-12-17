//http://uva.onlinejudge.org/external/118/11875.html
//Accepted
#include<iostream>
#include<cstdlib>
#include <cstring>
#include <string>
#include<algorithm>
using namespace std;
int age[20];

int main()
{
    int i,j,t,N,css=0,temp,mid;

    cin>>t;

    while(t--)
    {
        memset(age, 0, sizeof(age));
        css++;
        temp=0;
        mid=0;

        cin>>N;

        for(i=0; i<N; i++)
        {
            cin>>age[i];
        }

        //sort(age, age+N);
        for(i=0; i<N-1; i++)
        {
            for(j=0; j<N-i-1; j++)
            {
                if(age[j]>age[j+1])
                {
                    temp = age[j];
                    age[j]= age[j+1];
                    age[j+1] = temp;
                }
            }
        }
        mid = (N/2)+1;

        for(i=0; i<N; i++)
        {
            cout<<age[i]<<" ";
        }

        cout<<"Case "<<css<<": "<<age[mid-1]<<endl;


    }


return 0;
}
