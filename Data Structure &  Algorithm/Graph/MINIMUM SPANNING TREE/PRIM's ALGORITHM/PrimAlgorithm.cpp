//#################Minimum Spannig Tree##################//
//##################PRIM's AlGORITHM#####################//

#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;

int G[100][100],v,e,d[100],p[100],used[100],sum,pos,INF=100000;

int Extract_Min(int v, int e)
{
    int min,i;
    min=INF;

    for(i=1; i<=v; i++)
    {
        if(min>d[i] && used[i]==0)
        {
            min=d[i];
            pos=i;
        }
    }
    cout<<pos<<endl;
    return pos;
}
void MST(int v, int e)
{
	int u,min,i,j;
    sum=0;
	for(j=1; j<=v; j++)
	{
		u=Extract_Min(v,e);
		used[u]=1;

		sum=sum+d[u];

		cout<<"sum: "<<sum<<endl<<endl;
		/*for(int z=1; z<=v; z++)
		{
		    cout<<p[z]<<"\t";
		}*/
		cout<<endl;
		for(int z=1; z<=v; z++)
		{
		    cout<<d[z]<<"\t";
		}
		cout<<endl<<endl;

		for(i=1; i<=v; i++)
		{
		    if(G[u][i]>0)
		    {
		        if(G[u][i]<d[i]  && used[i]==0)
                {
                    d[i]=G[u][i];
                    p[i]=u;
                }
		    }
		}
	}
	cout<<endl<<endl;
	cout<<"VERTEX - VERTEX <- COST: \n\n";
    for(i=1; i<=v; i++)
    {
        printf(" V[%d]  -  V[%d]  <-  C[%d]\n\n",p[i],i,d[i]);
    }
    cout<<endl<<endl<<"Total: "<<sum<<endl;
}

int main()
{
	int i,j,m,n,w;

	cin>>v>>e;

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
		d[i]=INF;
		p[i]=0;
		used[i]=0;
	}
	d[1]=0;

	MST(v,e);

	return 0;
}
