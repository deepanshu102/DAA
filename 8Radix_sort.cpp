/************************************************
Q8. Radix sort to sort upto 4 digit numbers 
*************************************************/
#include<iostream>
using namespace std;
void radixSort(int arr[],int n);
int maxget(int arr[],int n);
void countSort(int arr[] ,int n,int digi);
void input(int arr[],int n);
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
int i,j;
int main()
{
	int n;
	cout<<"Enter the Size of array";
	cin>>n;
	int arr[n];
	input(arr,n);
	
}
void input(int arr[],int n)
{
	cout<<"Enter "<<n <<"Values:-\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	radixSort(arr,n);
	print(arr,n);
}
void radixSort(int arr[],int n)
{
	int m=maxget(arr,n);
	for(int i=1;m/i>0;i*=10)
	{
		countSort(arr,n,i);
	}
}
int maxget(int arr[],int n)
{
	 j=arr[0];
	for(int i=1;i<n;i++)
	{
		if(j<arr[i])
		{
			j=arr[i];
		}
	}
	return j;
}
void countSort(int arr[],int n,int digi)
{
	int output[n];
	int i, count[10]={0};
	for(i=0;i<n;i++)
	{
		count[(arr[i]/digi)%10]++;
	}
	for(i=1;i<10;i++)
	{
		count[i]+=count[i-1];	
	}

	for(i=n-1;i>=0;i--)
	{
		output[count[(arr[i]/digi)%10]-1]=arr[i];
		count[(arr[i]/digi)%10]--;
	}


	for(i=0;i<n;i++)
		arr[i]=output[i];
}
