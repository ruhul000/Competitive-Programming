//###############ALL PAIR SHORTEST PATH###################//
//#############FLOYD WARSHALL ALGORITHM###################//
//####################### FAHAD ##########################//

/*#include<iostream>
#include<limits>
#include<iomanip>
#define max 100
#define INF 15000

using namespace std;

int min(int a,int b)
{
	return a < b ? a : b;
}

int main()
{
	int V,E,i,j,k,src,dst,wet;
	int adj[max][max];
	cout<<"Enter Vertex : ";cin>>V;
	cout<<"Enter Edge : ";cin>>E;
	for(i=1;i<=V;i++)
	{
		for(j=1;j<=V;j++)
		{
			adj[i][j]=INF;
		}
	}
	cout<<"Enter Source -> Destination -> Weight : "<<endl;
	for(i=1;i<=V;i++)
	{
		adj[i][i]=0;
	}

	for(i=0;i<E;i++)
	{
		cin>>src>>dst>>wet;
		adj[src][dst]=wet;
	}

	for(k=1;k<=V;k++)        //complexity O(V^3);
	{
		for(i=1;i<=V;i++)
		{
			for(j=1;j<=V;j++)
			{
				adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
			}
		}
	}


	for(i=1;i<=V;i++)
	{
		for(j=1;j<=V;j++)
		{
			cout<<setw(10)<<adj[i][j];
		}
		cout<<endl;
	}
	return 0;
}
*/


//###############ALL PAIR SHORTEST PATH###################//
//#############FLOYD WARSHALL ALGORITHM###################//
//######################## Cjan ##########################//



#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
#define N 109
#define MAX 1000000000
#define Min(a,b) a<b?a:b

int cost[N][N],i,j,s,d,c,node,edge,k;

void Floyd_warshall()
{
        bool cycle=false;
        for(k=1;k<=node;k++)
                for(i=1;i<=node;i++)
                {
                        for(j=1;j<=node;j++)
                                cost[i][j]=Min(cost[i][j],cost[i][k]+cost[k][j]);
                        if(cost[i][i]!=0)cycle=true;
                }
        printf("\n");
        if(cycle==true)printf("This graph has a cycle\n");
        else
                for(i=1;i<=node;i++)
                {
                        for(j=1;j<=node;j++)
                                if(cost[i][j]!=MAX)printf("%5d",cost[i][j]);
                                else printf("%5c",'X');
                        printf("\n");
                }
}
int main()
{
        printf("Give number of Node: "),scanf("%d",&node);
        printf("Give number of edge:"),scanf("%d",&edge);
        for(i=1;i<=node;i++)
        {
                for(j=1;j<=node;j++)
                        cost[i][j]=MAX;
                cost[i][i]=0;
        }
        printf("1<= Source,Destination <=node\nsource-destination-cost\n");
        for(i=0;i<edge;i++)
                scanf("%d %d %d",&s,&d,&c),cost[s][d]=c;
        Floyd_warshall();

return 0;
}





