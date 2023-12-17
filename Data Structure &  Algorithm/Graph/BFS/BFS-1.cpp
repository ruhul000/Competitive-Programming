//****************BFS=Finding path & cost*************//
//****************Bipartite graph or not**************//
#include<iostream>
#include<queue>
using namespace std;

int G[100][100],dst[100],visit[100],path[100],color[100];
int n,e,u,v,t,i,j,s,inf=100000,m,loc,z;
queue <int> q;

int bfs(int n,int t, int s)
{
    dst[s]=0;
	visit[s]=1;
	color[s]=1;
	q.push(s);

    j=0;
    loc=0;
	while(!q.empty())
	{
		m=q.front();
		path[j]=m;
		j++;
		loc=j;
		q.pop();

		for(i=0; i<n; i++)
		{
			if(G[m][i]==1 && visit[i]==0 && color[i]==0)
			{
			    //cout<<"i="<<i<<endl;
				visit[i]=1;
				dst[i]=dst[m]+1;
				//cout<<dst[i]<<endl;
                if(color[m] == 1) color[i] = 2;
                else color[i] = 1;
				q.push(i);
			}
			else if(G[m][i] == 1 && visit[i] == 1 && color[i] == color[m]) /*Adjacent vertex visited and of similar colour as parent*/
            {
                return 0;
                //break;
            }
		}
	}
	return 1;
}

int main()
{

	cin>>n>>t;

	for(i=0; i<t; i++)
	{
		cin>>u>>v;

		G[u][v]=1;
		G[v][u]=1;
	}

	for(i=0; i<t; i++)
	{
		for(j=0; j<t; j++)
		{
			cout<<G[i][j]<<" ";
		}
		cout<<endl;
	}

	cin>>s;

	for(i=0; i<n; i++)
	{
		dst[i]=inf;
		visit[i]=0;
	}

    z=bfs(n,t,s);

    if(z==1)
    {
        cout<<"\nThe graph a bipartite graph.\n";
    }
    else
    {
        cout<<"\nThe graph is not a bipartite graph.\n";
    }


    cout<<"Path: ";
    for(i=0; i<loc; i++)
    {
        cout<<path[i]<<" ";
    }
    cout<<endl;
    cout<<"Cost: ";
	for(i=0; i<n; i++)
    {
        cout<<dst[i]<<" ";
    }

return 0;
}
