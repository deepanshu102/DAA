/************************************************
Q2. Selection sort for worst, best and avg case analysis
*************************************************/
#include<iostream>
using namespace std;
void Selection_Sort()
{
	int n;
	cout<<"Enter the Length of the array";
	cin>>n;
	int arr[n],min,i,j;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				min=j;	
			}
		}
		if(min!=i)
		{
			arr[i]=arr[i]^arr[min];
			arr[min]=arr[i]^arr[min];
			arr[i]=arr[i]^arr[min];
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
int main()
{
	Selection_Sort();
}
