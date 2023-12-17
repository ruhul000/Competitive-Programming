//===================ReHeapUp=================//

#include<iostream>
#include<algorithm>
using namespace std;
//int data[]={42,21,32,16,12,20,30,13,15,50,45};
//int data[]={10,54,12,62,52,44,33,22,27,47,55};
void ReHeapUp(int);
void HeapCheck(int);
int data[100];

void ReHeapUp(int index)
{
	 if(data[(index-1)/2] < data[index])
	 {
	     //cout<<data[(index-1)/2]<<" "<<data[index]<<endl;
	    swap(data[(index-1)/2] , data[index]);
	    // cout<<data[(index-1)/2]<<" "<<data[index]<<endl;

	     return ReHeapUp((index-1)/2);
	 }
}

int main()
{

int i,n;

cout<<"How Many Node: ";

cin>>n;

for(i=0; i<n; i++)
{
    cin>>data[i];
}

//==============ReHeapUp=============//

    for(int i=1 ; i<n; i++)
    ReHeapUp(i);

//HeapCheck(9);
    cout<<"Final Heap: ";
    for(i=0; i<n; i++)
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
for(i=0; i<n+1; i++)
{
    cout<<data[i]<<" ";
}
cout<<endl;

for(int i=1 ; i<n+1; i++)
ReHeapUp(i);

cout<<"Final Heap: ";
for(i=0; i<n+1; i++)
{
    cout<<data[i]<<" ";
}
cout<<endl;

//=============DELETING ROOT===========//

data[0]=data[n];
n--;

for(int i=1 ; i<n+1; i++)
ReHeapUp(i);

cout<<"After Delete: ";
for(i=0; i<n+1; i++)
{
    cout<<data[i]<<" ";
}
cout<<endl;

return 0;
}
