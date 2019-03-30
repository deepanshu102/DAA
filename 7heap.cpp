/************************************************
Q7. Min Heap Sort implementation to create a heap from the given set of values 
*************************************************/
#include<iostream>
using namespace std;
class HeapSort
{
	public:
		void input()
		{
			int n;
			
			int arr[7]={18,7,2,4,90,5,60};
			heapsort(arr,7);

		}
		void heapify(int a[],int size,int lar)
		{
			int largest=lar;
			int lff=2*lar+1;
			int rff=2*lar+2;
			if(lff<=size && a[lff]<a[largest])
			{
				largest=lff;
			}
			if(rff<=size && a[rff]<a[largest])
			{
				largest=rff;
			}
			if(largest!=lar)
			{
				swap(a[lar],a[largest]);
				heapify(a,size,largest);
			}
		}
		void heapsort(int a[],int size)
		{
			int i;
			for(i=size/2-1;i>=0;i--)
			{
				heapify(a,size,i);
			}
		/*	for( i=size-1;i>=0;i--)
			{
				swap(a[0],a[i]);
				heapify(a,i,0);
			
			}*/
			for(i=0;i<size;i++)
			{
				cout<<a[i]<<"\t";
			}
		}
		void swap(int &a1,int &a2)
		{
			a1^=a2;
			a2=a1^a2;
			a1^=a2;
		}
};
int main()
{
	HeapSort obk;
	obk.input();
}
