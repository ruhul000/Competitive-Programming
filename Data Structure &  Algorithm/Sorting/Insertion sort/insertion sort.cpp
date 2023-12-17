#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int i,j,n,temp;

    cout<<"Number of element: ";

    cin>>n;

    cout<<"Elements are: ";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=1; i<n; i++)
    {
        temp = a[i];
        j = i-1;

        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = temp;
    }
    cout<<"After sorting: ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}
