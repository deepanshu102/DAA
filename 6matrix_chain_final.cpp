/************************************************
Q6. Matrix Chain Multiplication for 6 matrices
*************************************************/

#include<iostream>
#define p 123456234567;
using namespace std;
void optimal_Solution_Value(int n,int d[][2]);
int main()
{
    int n;
    cout<<"Enter how many array you have?";
    cin>>n;
    int di[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>di[i][j];
        }
    }
  optimal_Solution_Value(n,di);
    return 0;
}
void optimal_Solution_Value(int n,int d[][2])
{
    long int m[n][n],s[n][n],q;
	int i,j,k,l;
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++)
	{ 
 	 
		if(i<j)
       		 {
       		     m[i][j]=p;
       		 }
		else
		{	
			m[i][j]=0;
		}
	}
    }

   for(l=1;l<n;l++)
    {
        for(i=0;i<(n-l);i++)
        {
            j=i+l;
            for(k=i;k<j;k++)
            {
		q=m[i][k]+m[k+1][j]+d[i][0]*d[k+1][0]*d[j][1];
               
		if(q<m[i][j])
                {
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
cout<<endl;
   for(i=0;i<n;i++)
   {
	for(j=0;j<n;j++)
	{
		cout<<m[i][j]<<"\t";
	}
	cout<<endl;
   }
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
	{
		cout<<s[i][j]<<"\t";
	}
	cout<<"\n";
   }
}
