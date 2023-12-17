//http://uva.onlinejudge.org/external/104/10450.html
//Accepted
#include<iostream>
using namespace std;

long long Divide_Conquer_Fib(long long n)
{
    long long i,j,k,h,t;
    i = h = 1;
    j = k = 0;
    while(n>0)
    {
        if(n%2 == 1)
        {
            t = j*h;
            j = i*h + j*k + t;
            i = i*k + t;
        }
        t = h*h;
        h = 2*k*h + t;
        k = k*k + t;
        n = (int) n/2;
    }
    return j;
}


int main()
{
long long fib,n,t,css=0;

cin>>t;

while(t--)
{
    cin>>n;
    css++;

    fib=Divide_Conquer_Fib(n+2);

    cout<<"Scenario #"<<css<<":"<<endl<<fib<<endl<<endl;
}

return 0;
}
