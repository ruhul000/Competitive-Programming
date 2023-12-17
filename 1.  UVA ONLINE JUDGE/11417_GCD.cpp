//http://uva.onlinejudge.org/external/114/11417.html
//Accepted


#include<iostream>
using namespace std;


int GCD (int num1, int num2)
{
    int temp,gcd;
    while(num2 != 0)
    {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    gcd = num1;

    return gcd;
}
int main()
{
    int i,j,G,N;
    while(cin>>N)
    {
        if(N==0) break;

        G=0;
        for(i=1;i<N;i++)
        {
            for(j=i+1;j<=N;j++)
            {
                G = G + GCD(i,j);

            }
        }
        cout<<G<<endl;
    }

    return 0;
}
