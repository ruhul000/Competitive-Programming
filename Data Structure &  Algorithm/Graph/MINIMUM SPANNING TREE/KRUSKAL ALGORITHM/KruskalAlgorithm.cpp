//#################Minimum Spannig Tree##################//

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>
using namespace std;

int G[100][100],v,e,sum,INF=100000,p[100],from,to,p1,p2;

int E_min(int v, int e)
{
	int i, j, min;

	min=INF;
	for(i=1; i<=v; i++ )
	{
		for(j=1; j<=v; j++)
		{
			if(G[i][j]<min)
			{
				min=G[i][j];
				from=i;
				to=j;
			}
		}
	}
	G[from][to]=INF;
	G[to][from]=INF;
	//cout<<from<<" "<<to<<endl;
	return min;
}

int Find(int vertex)
{
    if(p[vertex]==-1)return vertex;
    return p[vertex] = Find(p[vertex]);
}

int Union(int parent1,int parent2)
{
    p[p1] = p2;
}

void Kruskal(int v, int e)
{
	int u,min,i,j;
    cout<<endl;
    cout<<"VERTEX - VERTEX <- COST: \n\n";
	for(i=1; i<=e; i++)
	{
		u=E_min(v,e);
        p1=Find(from);
        p2=Find(to);
        if(p1!=p2)
        {
            printf(" V[%d]  -  V[%d]  <-  C[%d]\n\n",from,to,u);
            Union(p1,p2);
            sum+=u;
        }
	}
    for(int z=1; z<=v; z++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl<<endl;
	cout<<endl<<endl<<"Total: "<<sum<<endl;
}

int main()
{
	int i,j,m,n,w;

	cin>>v>>e;

	for(i=1; i<=v; i++)
	{
	    for(j=1; j<=v; j++)
	    {
	        G[i][j]=INF;
	    }
	}

	for(i=1; i<=e; i++)
	{
		cin>>m>>n>>w;

		G[m][n]=w;
		G[n][m]=w;
	}

	for(i=1; i<=v; i++)
	{
	    for(j=1; j<=v; j++)
	    {
	        cout<<G[i][j]<<"\t";
	    }
	    cout<<endl;
	}

	for(i=1; i<=v; i++)
	{
		p[i]=-1;
	}

	Kruskal(v,e);

	return 0;
}




