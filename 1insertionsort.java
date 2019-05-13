import java.util.Scanner;

class Insertion_Sort
{
	private int arr[],size;
	public Insertion_Sort(int size)
	{
		arr=new int[size];
		this.size=size;
	}
	public void sort()
	{
		Scanner sc=new Scanner(System.in);
		for(int i=0;i<size;i++)
		{
			arr[i]=sc.nextInt();
			for(int j=0;j<i;j++)
			{
				if(arr[i]<arr[j])
				{
					swap(i,j);
				}
			}
		}
	}
	public void display()
	{
		for(int i=0;i<size;i++)
		{
			System.out.print(arr[i]+"\t");
		}
	}
	private void swap(int i,int j)
	{
		arr[i]^=arr[j];
		arr[j]=arr[i]^arr[j];
		arr[i]^=arr[j];
	}
}
class Insertion_main
{
	public static void main(String ... args)	
	{
		System.out.println("Enter the Size of array");
		int k=(new Scanner(System.in)).nextInt();
		Insertion_Sort obk=new Insertion_Sort(k);
		obk.sort();
		obk.display();
	}
	
}
//----------------------------------------------------//
//import java.util.Scanner;

class Selection_Sort
{
	private int arr[],size;


	public Selection_Sort(int s)
	{
		arr=new int[s];
		size=s;
		System.out.println(size);
	}
	public void input()
	{
		for(int i=0;i<size;i++)
		{
			arr[i]=(new Scanner(System.in)).nextInt();
		}
		sort();
	}
	public void display()
	{
		for(int i=0;i<size;i++)
		{
			System.out.print(arr[i]+"\t");

		}
	}
	public void sort()
	{
		int i,j,m;
		for(i=0;i<size;i++)
		{m=i;
			
			for(j=i+1;j<size;j++)
			{
				if(arr[i]<arr[j])
				{
					m=j;
				}
			}
			if(m!=i)
			{
				swap(i,j);
			}			
		}
		display();
	}
	private void swap(int i,int j)
	{
		arr[i]+=arr[j];
		arr[j]=arr[i]-arr[j];
		arr[i]=arr[i]-arr[j];
	}
}

class Selection_main
{
	public static void main(String ... args)
	{
		System.out.println("enter the size of array");
	int k=(new Scanner(System.in)).nextInt();
		Selection_Sort obj=new Selection_Sort(k);
	obj.input();
	}
}
