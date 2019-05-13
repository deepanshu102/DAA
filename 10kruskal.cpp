#include<iostream>
using namespace std;
int i,j,k,a,b,u,v,n,ne=1;
int min1,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
int main()
{
	cout<<"Enter the No. of Vertices: ";
	cin>>n;
	cout<<"Enter the Cost Adjacency Matrix: \n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>cost[i][j];
			if(cost[i][j]==0)
				cost[i][j]=99;
		}
	}
	cout<<"\nThe Edges of Minimum Cost Spanning Tree are\n";
	while(ne<n)
	{
		for(i=1,min1=99;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min1)
				{
					min1=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=find(u);
		v=find(v);
		if(uni(u,v))
		{
			cout<<"Edge"<<ne++<<" is"<<"("<<a<<","<<b<<")"<<"and Cost is: "<<min1<<"\n";
			mincost +=min1;
		}
		cost[a][b]=cost[b][a]=99;
	}	
	cout<<"Cost of Minimum Spanning Tree is: "<<mincost;
}
int find(int i)
{
	while(parent[i])
	i=parent[i];
	return i;
}
int uni(int i,int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
return 0;
}

