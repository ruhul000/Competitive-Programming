//http://uva.onlinejudge.org/external/101/10127.html
//Accepted

#include <cstdio>
#include<iostream>
using namespace std;
int n;

int Ones()
{
    int cnt = 1;
    int m = 1 % n;
    //cout<<"m1= "<<m<<endl;

    while (m != 0)
    {
        m = m*10 + 1;
        //cout<<"m2= "<<m<<endl;
        m %= n;
        //cout<<"m3= "<<m<<" "<<n<<endl;
        ++cnt;
    }

    return cnt;
}

int main()
{
    while (1) {
        if (scanf("%d", &n) != 1) break;

        printf("%d\n", Ones());
    }

    return 0;
}
