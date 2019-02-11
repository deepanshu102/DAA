#include<iostream>
using namespace std;
class QuickSort
{
public:
	void quicksort(int arr[],int lower,int upper)
	{
		if(lower<upper)
		{
			int j=partition(arr,lower,upper);	
			quicksort(arr,lower,j-1);
			quicksort(arr,j+1,upper);
		}
	}
	int partition(int arr[],int l,int u)
	{
		int key=arr[l];
		int i=l+1,j=u;
		while(i<j)
		{
			while(arr[i]<key)
			  i++;
			while(arr[j]>key)
			  j--;
			if(i<j)
			{
			arr[i]=arr[i]^arr[j];
			arr[j]=arr[i]^arr[j];
			arr[i]=arr[i]^arr[j];
			}
		}
		if(i>=j)
		{
			arr[l]=arr[l]^arr[j];
			arr[j]=arr[l]^arr[j];
			arr[l]=arr[l]^arr[j];
		}
		return j;
	}
	void Input()
	{
	       int n;
	       cout<<"Enter the lenght of the array";
	       cin>>n;
	       int arr[n];
	       for(int i=0;i<n;i++)
		cin>>arr[i];
               result(arr,n);
	}

	void result(int arr[],int n)
	{
		quicksort(arr,0,n);	
		for(int i=0;i<n;i++)
			cout<<arr[i]<<"\t";
	}
};
int main()
{
	QuickSort obj;
	obj.Input();
}
