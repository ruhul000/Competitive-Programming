#include<iostream>
using namespace std;

int array[100];

long long fibonacci( long long n )
{
    if( n == 0 || n == 1 ) return 1;
    else if( array[n] == 0 )
    {
        cout<<"n="<<n<<endl;
        cout<<array[n]<<" (n-1)= "<<fibonacci(n-1)<<" (n-2)= "<<fibonacci(n-2)<<endl;
        array[n] = fibonacci( n-1 ) + fibonacci( n-2 );// ye! o khushi! :D
        //cout<<array[n]<<" (n-1)= "<<fibonacci(n-1)<<" (n-2)= "<<fibonacci(n-2)<<endl;
    }


    return array[n];
}

int fib(int a)
{
    if(a<=1)
    {
        return a;
    }
    else
    {
       int b = fib(a-1)+fib(a-2);
       return b;
    }

}

/*int main()
{
    int length,fibNum,i;

    cout<<"length = ";
    cin>>length;

    for(i=1; i<=length; i++)
    {
        fibNum = fib(i);
        cout<<fibNum<<" ";
    }
    return 0;
}*/
int main()
{
    int n;
    while(1)
    {
        cin>>n;

        cout<<"fib = "<<fibonacci(n)<<endl;
    }

    return 0;
}
