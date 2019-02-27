#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int min(unsigned int result[][3])
{
	int S=INT_MAX,i,index;
	//printf("hello");
	for(i=1;i<5;i++)
	{
		if(S>result[i][0] && result[i][2]!=1)
		{
			S=result[i][0];
			index=i;
		}
		//printf("HELLO");
	}
	//printf("%d\t%d",S,index);
	return index;
}
int main()
{

	unsigned int adj[5][5]={0,3,2,9,INT_MAX,3,
				0,INT_MAX,INT_MAX,7,
				2,INT_MAX,0,6,INT_MAX,
				9,INT_MAX,6,0,INT_MAX,
				INT_MAX,7,INT_MAX,INT_MAX,0},result[5][3];
	int i,j,s=0,d;
	//initialisation of resultant matrix
	for(i=0;i<5;i++)
	{
		result[i][1]=result[i][0]=INT_MAX;
		result[i][2]=0;
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t%d\t%d\n",result[i][0],result[i][1],result[i][2]);
	}
	result[0][0]=result[0][1]=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j!=s || result[i][2]!=1)
			{
				d=result[s][0]+adj[s][j];
				if(d<result[j][0])
				{
					result[j][0]=d;
					result[j][1]=s;
				}
			}	
		}
		result[s][2]=1;
		s=min(result);
		//printf("\n%d\t",result[j-1][0]);
	}
//	printf("\nFinal Output Matrix");
	for(i=0;i<5;i++)
	{
		printf("\n");
		printf("\t%d",result[i][0]);
		printf("\t%d",result[i][1]);
		printf("\t%d",result[i][2]);
	}
}
