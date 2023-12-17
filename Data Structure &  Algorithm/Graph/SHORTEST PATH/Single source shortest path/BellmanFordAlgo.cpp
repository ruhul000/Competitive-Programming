////#############SINGLE SOURCE SHORTEST PATH################//
////###############BELLMAN FORD ALGORITHM###################//
////######################### ME ###########################//
//
//
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//
//int G[100][100],inf=100000,d[100],p[100],used[100],path[10];
//
//void Initialize_Single_Source(int v,int e,int s)
//{
//    int i;
//
//    for(i=1; i<=v; i++)
//    {
//        d[i]=inf;
//        p[i]=NULL;
//    }
//    d[s]=0;
//}
//
//void Relax(int u, int v, int w)
//{
//    if(d[v]>d[u]+w)
//    {
//        d[v]=d[u]+w;
//        p[v]=u;
//    }
//}
//
//int Bellman_Ford(int v,int e,int s)
//{
//    Initialize_Single_Source(v,e,s);
//    int i,j,k,u;
//
//    for(k=1; k<=v-1; k++)
//    {
//        for(i=1; i<=v; i++)
//        {
//            for(j=1; j<=v; j++)
//            {
//                if(G[i][j]<inf)
//                {
//                    Relax(i,j,G[i][j]);
//                }
//            }
//        }
//    }
//    for(i=1; i<=v; i++)
//    {
//        for(j=1; j<=v; j++)
//        {
//            if(d[j]>d[i]+G[i][j])
//            {
//                return 1;
//            }
//        }
//    }
//
//    return 0;
//}
//
//
//int main()
//{
//    int i,j,v,e,w,m,n,s,z,end;
//
//	cin>>v>>e;
//
//	for(i=1; i<=v; i++)
//	{
//		for(j=1; j<=v; j++)
//		{
//			G[i][j]=inf;
//		}
//	}
//
//	for(i=1; i<=e; i++)
//	{
//		cin>>m>>n>>w;
//
//		G[m][n]=w;
//		G[n][m]=w;
//	}
//	cin>>s>>end;
//
//    cout<<endl;
//	for(i=1; i<=v; i++)
//	{
//		for(j=1; j<=v; j++)
//		{
//			cout<<G[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//    cout<<endl;
//
//    z=Bellman_Ford(v,e,s);
//    if(z==1)cout<<"INVALIED\n";
//    else
//    {
//        cout<<"Shortest Path length: ";
//        for(i=1;i<=v;i++)
//        {
//            cout<<d[i]<<" ";
//        }
//        cout<<endl<<endl;
//
//        cout<<"Prev: ";
//        for(i=1;i<=v;i++)
//        {
//            cout<<p[i]<<" ";
//        }
//        cout<<endl<<endl;
//
//        cout<<"VERTEX - VERTEX <- COST: \n\n";
//        for(i=1; i<=v; i++)
//        {
//            printf(" V[%d]  -  V[%d]  <-  C[%d]\n\n",p[i],i,d[i]);
//        }
//    }
//
//    int c=0;
//    j=end;
//    //path[0]=end;
//    while(1)
//    {
//        if(j==s)
//        {
//            path[c]=j;
//            break;
//        }
//        else
//        {
//            path[c]=j;
//            j=p[j];
//            c++;
//        }
//    }
//    cout<<endl;
//    for(i=c; i>=0; i--)
//    {
//        cout<<path[i]<<" ";
//    }
//
//return 0;
//}


//#############SINGLE SOURCE SHORTEST PATH################//
//###############BELLMAN FORD ALGORITHM###################//
//####################### FAHAD ##########################//



/*#include<iostream>
#include<new>+
#include<climits>
#define INF 20000

using namespace std;


void Bellman_Ford(int a[],int b[],int c[],int d[],int vertex,int edge)
{
	int i,j;
	for(i=1;i<=vertex;i++)
	{
		d[i]=INF;
	}
	d[1]=0;
	for(i=1;i<=vertex-1;i++)               //complexity O(VE);
	{
		for(j=1;j<=edge;j++)
		{
			if(d[a[j]]+c[j]<d[b[j]])
			{
				d[b[j]]=d[a[j]]+c[j];
			}
		}
	}


	cout<<"Shortest Path length..."<<endl;
	for(i=1;i<=vertex;i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int V,E,i;
	int *src,*dst,*wet,*res;
	cout<<"Enter Vertex : ";cin>>V;
	cout<<"Enter Edge : ";cin>>E;

	src=new int[E+1];             //memory allocation;
	dst=new int[E+1];
	wet=new int[E+1];
	res=new int[V+1];


	cout<<"Enter Source -> Destination -> Weight : "<<endl;
	for(i=1;i<=E;i++)
	{
		cin>>src[i]>>dst[i]>>wet[i];
	}

	Bellman_Ford(src,dst,wet,res,V,E);


	delete[] src;               //memory deletion;
	delete[] dst;
	delete[] wet;
	delete[] res;


	return 0;
}*/

//#############SINGLE SOURCE SHORTEST PATH################//
//###############BELLMAN FORD ALGORITHM###################//
//####################### Cjan ###########################//


#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;
#define N 100
#define MAX 1000000
#define Min(a,b) a<b?a:b

struct st
{
        int s,d,cost;
}path[N];

int node,edge,s,d,c,i,j,dist[N];

void Bellman_ford(int source)
{
        for(i=1;i<=node;i++)
                dist[i]=MAX;
        bool cycle=false;
        dist[source]=0;
        for(i=1;i<node;i++)
                for(j=0;j<edge;j++)
                        dist[path[j].d]=Min(dist[path[j].d],dist[path[j].s]+path[j].cost);

        for(j=0;j<edge;j++)
                if(dist[path[j].s]+path[j].cost<dist[path[j].d])
                        cycle=true;
        if(cycle==true)
                printf("\nThis graph has a negative cycle\n");
        else
        {
                for(i=1;i<=node;i++)
                        printf("\nMinimum distance from node %d= %2d",i,dist[i]);
        }
}
int main()
{
        int source;
        printf("Number of Node:"),scanf("%d",&node);
        printf("Number if edge: "),scanf("%d",&edge);
        printf("1<=source,destination<=node\nsource-destination-cost\n");
        for(i=0;i<edge;i++)
                scanf("%d %d %d",&path[i].s,&path[i].d,&path[i].cost);
        printf("Give a source:"),scanf("%d",&source);
        Bellman_ford(source);
return 0;
}

