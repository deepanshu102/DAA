/************************************************
Q4. Merge sort for worst and avg case analysis

*************************************************/
#include<iostream>
using namespace std;
class MergeSorting
{
	public:
	static void MergeSort(int arr[],int initial,int ending)
	{
		if(initial<ending)	
		{
			int mid=(initial+ending)/2;
			MergeSort(arr,initial,mid);
			MergeSort(arr,mid+1,ending);
			Merge(arr,initial,mid,ending);
		}
	}
	static void Merge(int arr[],int initial,int mid,int end)
	{
		int left[mid-initial+1],right[end-mid];
		int i,j=0,k=0;
		for(i=0;i<(mid-initial+1);i++)
			left[i]=arr[initial+i];
		for(i=0;i<(end-mid);i++)
			right[i]=arr[mid+i+1];
		i=initial;
		while(j<(mid-initial+1) && k<(end-mid))
		{
			if(left[j]<=right[k])
			{
				arr[i]=left[j];
				j++;
			}
			else if(left[j]>right[k])
			{
				arr[i]=right[k];
				k++;
			}
			i++;
		}
		while(j<(mid-initial+1))
		{
			arr[i]=left[j];
			i++;
			j++;
		}
		while(k<(end-mid))
		{
			arr[i]=right[k];
			i++;
			k++;
		}
	}
	static void input()
	{
		int n;
		cout<<"Enter the Array Size:- ";
		cin>>n;
		int arr[n],i;
		for(i=0;i<n;i++)
			cin>>arr[i];
		Result(arr,n);
	}
	static void Result(int arr[],int n)
	{
		MergeSort(arr,0,n-1);
		cout<<endl;
		for(int i=0;i<n;i++)	
			cout<<arr[i]<<"\t";
	}

};
int main()
{
	MergeSorting::input();
}
