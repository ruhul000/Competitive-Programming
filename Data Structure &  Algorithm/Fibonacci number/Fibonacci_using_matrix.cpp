
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
    fib=Divide_Conquer_Fib(n);
    cout<<fib<<endl;
}

return 0;
}

/*#include <iostream>

using namespace std;

unsigned __int64 x = 1;
unsigned __int64 y;
unsigned __int64 z;
int a;
int b;
int c=0;


int main()
{
    cout << "Find how many numbers? \n";
    cin >> a;

    for (b=0;b<a;b++)
    {
        if (b%3==0)
        {
            c++;
            cout <<"\n" << c << ") ";
        }

        cout << x << "  ";
        z = y;
        y = x;
        x +=z;

        if (x < z)
        {
             cout << "\nMaxed out at " << b+1;
             b = a;
        }

    }


}*/

