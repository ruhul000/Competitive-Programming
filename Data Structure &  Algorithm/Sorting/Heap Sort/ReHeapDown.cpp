//===================ReHeapDown=================//

#include<iostream>
#include<algorithm>
using namespace std;
//int data[]={0,32,21,42,16,12,20,30,13,15};
int Lc,Rc;
int data[]={0,10,54,12,62,52,44,33,22,27};
void ReHeapDown(int);
//void HeapCheck(int);
//int data[100];

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

int main()
{
    int i,n;

    cout<<"How Many Node: ";

    cin>>n;
    data[0]=0;
    for(i=1; i<=n; i++)
    {
        cin>>data[i];
    }

    //==============ReHeapDown=============//

    for(int i=n-1 ; i>0; i--)
        ReHeapDown(i);

    cout<<"Final Heap: ";

    for(int i=1; i<=n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;

    //==============Insert==============//
    int new_n;
    cout<<"New Node: ";
    cin>>new_n;
    data[n]=new_n;

    cout<<"New Heap: ";
    for(i=1; i<n+1; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;

    for(int i=n-1 ; i>0; i--)
        ReHeapDown(i);

    cout<<"Final Heap: ";

    for(int i=1; i<=n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;

    //=============DELETING ROOT===========//

    data[1]=data[n];
    n--;

    for(int i=n-1 ; i>0; i--)
        ReHeapDown(i);

    cout<<"After Delete: ";

    for(int i=1; i<=n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;

    return 0;
}

