
#include<iostream>
using namespace std;
void insertion_sort()
{
	int n,i,j,key;
	cout<<"Enter the Length of the array: ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{	
		cin>>arr[i];
		j=i-1;		
		key=arr[i];
		while(j>=0 && key<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	for(i=0;i<n;i++)
	{		
		cout<<arr[i]<<"\t";
	}
}
int main()
{
	insertion_sort();
}
