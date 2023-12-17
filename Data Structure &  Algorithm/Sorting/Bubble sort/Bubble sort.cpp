#include<iostream>
using namespace std;

int main()
{
    int a[10] = {5,1,3,7,4,9,6,8,10,2};
    int i,j,temp,n=10;

    cout<<"Unsorted Array: ";
    for(i=0; i<10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"Sorted Array: ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

/*for(int x=0; x<n; x++)

	{

		for(int y=0; y<n-1; y++)

		{

			if(array[y]>array[y+1])

			{

				int temp = array[y+1];

				array[y+1] = array[y];

				array[y] = temp;

			}

		}

	}*/
