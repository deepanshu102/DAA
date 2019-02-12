#include<iostream>
using namespace std;
class QuickSort
{
public:

	void Input()
	{
	       int n;
	       cout<<"Enter the lenght of the array";
	       cin>>n;
	       int arr[n];
		
	       for(int i=0;i<n;i++)
		{cout<<i<<"\t";cin>>arr[i];}
		cout<<"Result called";
               result(arr,n);
	}

	void result(int arr[],int n)
	{
		quicksort(arr,0,n-1);	
		for(int i=0;i<n;i++)
			cout<<arr[i]<<"\t";
	}
	void quicksort(int arr[],int initial,int end)
	{
		if(initial<end)
		{
			int j=patition(arr,initial,end);
			cout<<"\tJ1:-"<<j<<endl;
			for(int i=initial;i<=end;i++)
			{	
				cout<<arr[i]<<"\t";
			}
			cout<<endl;
			quicksort(arr,initial,j-1);
			quicksort(arr,j+1,end);
		}
	}
/*	int patition(int arr[],int initial,int end)
	{
		int val=arr[initial];
		int i=initial+1,j=end;
		while(i<j)
		{
			while(arr[i]<val)
			{	i++; cout<<"i:-"<<i<<"\t";}
			while(arr[j]>val)
			{	j--; cout<<"j:-"<<j<<"\t";}
			if(i<j)
			{
				arr[i]^=arr[j];
				arr[j]=arr[i]^arr[j];
				arr[i]=arr[i]^arr[j];	
			}
		}
										    arr[initial]^=arr[j];
			arr[j]=arr[initial]^arr[j];
			arr[initial]=arr[initial]^arr[j];
		
		return j;
	}*/
 	int patition(int arr[],int initial,int end)
	{	
		int mid=(initial+end)/2;
		int i=initial,j=end;
		int key=arr[mid];
		while(i<j)
		{
			while(arr[i]<key)
				i++;
			while(arr[j]>key)
				j--;
			if(i<j)
			  swap(arr[i],arr[j]);
		}
		return j;
	}
	void swap(int &arr1,int &arr2)
	{
		arr1+=arr2;
		arr2=arr1-arr2;
		arr1=arr1-arr2;
	}
};
int main()
{
	QuickSort obj;
	obj.Input();
}
