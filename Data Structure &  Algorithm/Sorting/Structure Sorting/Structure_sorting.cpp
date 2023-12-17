#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

struct obj{

	int u,v,cost;


}edg[100];

bool com(obj A, obj B)
{
	if(A.cost<B.cost)
	{
		return true;
	}
	return false;

}


int main()
{
	int n,i;

	 cin>>n;

	for(i=0; i<n; i++)
	{
		cin>>edg[i].u>>edg[i].v>>edg[i].cost;
	}

	sort(edg,edg+i,com);
	for(i=0; i<n; i++)
	printf("%d\n",edg[i].cost);
	system("pause");


return 0;
}
