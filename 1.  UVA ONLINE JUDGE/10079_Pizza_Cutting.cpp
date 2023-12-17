//http://uva.onlinejudge.org/external/100/10079.html
//Accepted

/*#include<iostream>
using namespace std;

int main()
{
    unsigned long int a[210000],i;

    a[0]=1;
    a[1]=2;

    for(i=2; i<=21000; i++)
    {
        a[i]= a[i-1] + i;
    }
    for(i=0; i<=210000; i++)
    {
        cout<<i<<"="<<a[i]<<endl;
    }


    return 0;
}*/
/*#include <stdio.h>

int num(unsigned long int n)
{

    unsigned long int f1=2,num=0;
    int i;

    if (n==0)
    {
      return 1;
    }
    else if(n==1)
    {
        return 2;
    }
    else
    {
        for(i=2;i<=n;i++)
        {
            num=f1+i;
            f1=num;
        }
        return num;
    }
}

int main()
{
    unsigned long int Num,i,N;

    while(scanf("%lu",&N))
    {
        if(N<0)
        {
            break;
        }
        else
        {
            Num = num(N);
            printf("%lu\n",Num);
        }
    }

return 0;
}*/

#include<iostream>
using namespace std;


int main()
{
    long long int num;

    while(cin>>num)
    {
        if(num<0)
        {
            break;
        }
        else
        {
            num = ((num * (num + 1))/2) + 1;
            cout<<num<<endl;
        }
    }
    return 0;
}



