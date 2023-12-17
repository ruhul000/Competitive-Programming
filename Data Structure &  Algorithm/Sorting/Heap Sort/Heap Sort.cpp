//*******************HeapSort******************//

//==============start==============//
#include<iostream>
#include<algorithm>
using namespace std;
int Lc,Rc;
int data[100];

void ReHeapDown(int root)
{
    Lc=2*root;
    Rc=2*root+1;

    if(data[root]<data[Lc] || data[root]<data[Rc])
    {
        if(data[Rc]>data[Lc])
        {
            swap(data[root],data[Rc]);
            return ReHeapDown(Rc);
        }
        else
        {
            swap(data[root],data[Lc]);
            return ReHeapDown(Lc);
        }
    }
}
//HeapSort()

int main()
{
    int i,n,j;
    int root[100];
    cout<<"How Many Node: ";

    cin>>n;
    data[0]=0;

    for(i=1; i<=n; i++)
    {
        cin>>data[i];
    }

//    for(int i=n-1; i>0; i--)
//    ReHeapDown(i);

    cout<<"Final Heap: ";

    for(int i=1; i<=n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl<<endl;

    //=============DELETING ROOT===========//

    j=n;
    while(1)
    {
        if(n==0) break;

        for(i=1; i<=j; i++)
        {
            root[i]=data[1];
            data[1]=data[n];
            n--;
            cout<<"N= "<<n<<endl;

            for(int i=0 ; i<=n; i++)
            ReHeapDown(i);


            cout<<"After Deleting Root: ";
            for(int i=1; i<=n; i++)
            {
                cout<<data[i]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<"\nSorted Heap: ";
    for(int i=1; i<=j; i++)
    {
        cout<<root[i]<<" ";
    }

    return 0;
}
//===============End=============//
