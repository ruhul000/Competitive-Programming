#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int ara[100];

void Marge_sort(int index, int s ,int e)
{
    int temp;
    if(s<e)
    {
        temp=(s+e)/2;
        Marge_sort(index,s,temp-1);
        Marge_sort(index,temp,e);
        Marge_sort(index,s,e);
    }
}

int main()
{
    int i,n;
    cout<<"How many element: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>ara[i];
    }

    Marge_sort(1,1,8);

    for(i=1; i<=n; i++)
    {
        cout<<ara[i]<<" ";
    }


return 0;
}
