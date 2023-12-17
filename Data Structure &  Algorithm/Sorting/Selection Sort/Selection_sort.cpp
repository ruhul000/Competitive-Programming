#include <iostream>
using namespace std;

int main()
{
    int data[100];

    int i,j,max,temp,n;

    cout<<"Number of Element: ";
    cin>>n;
    cout<<"Elements are: ";
    for(i=0; i<n; i++)
    {
        cin>>data[i];
    }

    for(i=0; i<n-1; i++)
    {
        max = i;

        for(j=i+1 ; j<n; j++)
        {
            if(data[j]>data[max])
            {
                max = j;
            }

        }
         temp = data[i];
         data[i] = data[max];
         data[max] = temp;
    }
    cout<<"After Sorting: ";
    for(i=n-1; i>=0; i--)
    {
        cout<<data[i]<<" ";
    }


    return 0;
}


