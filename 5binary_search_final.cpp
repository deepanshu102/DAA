/************************************************
Q5. Binary search for worst and best case analysis
*************************************************/
#include<iostream>
using namespace std;
class BinarySearch
{
	public:
		void input()
		{
			int k;
			cout<<"Enter the size of the list";
			cin>>k;
			int a[k];
			cout<<"Enter the " <<k<<" Element\n";
			for(int i=0;i<k;i++)
			{
				cin>>a[i];
			}
			result(a,k);
		}
		void result(int a[],int k)
		{
			int tar;
			sort(a,k);
			cout<<"Enter the target element:-";
			cin>>tar;
			search(a,tar,k);
		}
		void sort(int a[],int end)
		{
			for(int i=0;i<end;i++)
			{
				for(int j=i+1;j<end;j++)
				{
					if(a[i]>a[j])
					{
						a[i]^=a[j];
						a[j]=a[i]^a[j];
						a[i]^=a[j];
					}
				}
			}
		}
		void search(int a[],int tar,int k)
		{	int mid=k/2;
			int left=0,right=k-1;
			while(a[mid]!=tar && (left<=right))
			{
				if(a[mid]>tar)
				{
					right=mid-1;
				}
				else if(a[mid]<tar)
				{
					left=mid+1;
				}
				mid=(left+right)/2;
			}
			if(a[mid]==tar)
			{
				cout<<tar<<" is found on "<<mid<<endl;
			}
			else
			{
				cout<<tar<<" is not found\n";
			}
			for(int i=0;i<k;i++)
			{
				cout<<a[i]<<"\t";
			}
		}
	void swap(int &arr1,int &arr2)
	{
		arr1^=arr2;
		arr2=arr1^arr2;
		arr1^=arr2;
	}	

}obk;
int main()
{
	obk.input();
}
