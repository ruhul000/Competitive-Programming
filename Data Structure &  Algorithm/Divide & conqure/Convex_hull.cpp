#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<stack>
#include<string.h>
using namespace std;

int n;
stack<int> s;
int used[100];

struct obj
{
	int x,y;
}point[100];

bool com(obj A, obj B)
{
	if(A.y<B.x)
	{
		return true;
	}
	return false;
}

int Cross_product(int p1, int p2, int p3)
{
    return (point[2].x - point[1].x)*(p3 - p1) - (point[3].x - point[1].x)*(p2 - p1);
}

void Graham_Scan()
{
    int i,a,b,z;

    sort(point,point+n,com);
	for(i=0; i<n; i++)
	printf("\n%d %d\n",point[i].x,point[i].y);

	s.push(point[0].y);
	s.push(point[1].y);
	//s.push(point[2].y);

    for(i=2; i<n; i++)
    {
        a=s.top();
        s.pop();
        b=s.top();
        s.push(a);


        if((Cross_product(a, b, point[i].y)) <= 0)
        {
            used[i-1]=0;
            s.pop();
        }
        s.push(point[i].y);
    }

    z=s.size();
    //cout<<z<<endl;

    for(i=0; i<z; i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl<<endl;

    for(i=0; i<n; i++)
    {
        if(used[i]==1)
        printf("\n%d %d\n",point[i].x,point[i].y);
    }

}

int main()
{
	int i;


    cin>>n;
	for(i=0; i<n; i++)
	{
		used[i]=1;
	}

	for(i=0; i<n; i++)
	{
		cin>>point[i].x>>point[i].y;
	}

	Graham_Scan();

return 0;
}
