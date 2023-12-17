//http://uva.onlinejudge.org/external/124/12459.html
//Accepted
#include<iostream>
using namespace std;

long long Divide_Conquer_Fib(long long n)
{
    long long i,j,k,h,t;
    j = h = 1;//*******1 2 3 5 8 13*******//
    i = k = 0;

    //i = h = 1;//*******1 1 2 3 5 8*******//
    //j = k = 0;
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
long long fib,n;
while(cin>>n)
{
    if(n==0) break;
    fib=Divide_Conquer_Fib(n);
    cout<<fib<<endl;
}

return 0;
}
