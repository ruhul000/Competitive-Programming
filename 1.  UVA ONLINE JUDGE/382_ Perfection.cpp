//http://uva.onlinejudge.org/external/3/382.html
//Accepted

#include<iostream>
using namespace std;

int main()
{
    long int i,N,sum,temp;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>N)
    {

        if(N==0)
        {
            cout<<"END OF OUTPUT"<<endl;
             break;
        }
        else
        {
            sum=0;
            temp=N/2;
            for(i=1; i<=temp; i++)
            {
                if(N%i==0)
                {
                    sum += i;
                }
            }
            if(N>=1 && N<=9)
            {
                cout<<"    "<<N;
            }
            else if(N>=10 && N<=99)
            {
                cout<<"   "<<N;
            }
            else if(N>=100 && N<=999)
            {
                cout<<"  "<<N;
            }
            else if(N>=1000 && N<=9999)
            {
                cout<<" "<<N;
            }
            else if(N>=10000 && N<=99999)
            {
                cout<<N;
            }
            if(sum==N)
            {

                cout<<"  PERFECT"<<endl;
            }
            else if(sum>N)
            {
                cout<<"  ABUNDANT"<<endl;
            }
            else
            {
                cout<<"  DEFICIENT"<<endl;
            }
        }


    }

    return 0;
}
