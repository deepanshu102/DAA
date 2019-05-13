#include<stdio.h>

int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
int main()
{
printf(&quot;Enter the No. of Vertices: &quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;Enter the Cost Adjacency Matrix: \n&quot;);
for(i=1;i&lt;=n;i++)
{
for(j=1;j&lt;=n;j++)
{
scanf(&quot;%d&quot;,&amp;cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=99;
}
}
printf(&quot;\nThe Edges of Minimum Cost Spanning Tree are\n&quot;);
while(ne&lt;n)
{
for(i=1,min=99;i&lt;=n;i++)
{
for(j=1;j&lt;=n;j++)
{
if(cost[i][j]&lt;min)
{
min=cost[i][j];
a=u=i;
b=v=j;
}
}
}
u=find(u);
v=find(v);
if(uni(u,v))
{
printf(&quot;Edge %d is (%d,%d) and Cost is: %d\n&quot;,ne++,a,b,min);
mincost +=min;
}
cost[a][b]=cost[b][a]=99;
}
printf(&quot;\nCost of Minimum Spanning Tree is: %d&quot;,mincost);
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
return
