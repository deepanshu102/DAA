#include<iostream>
#include<string>
using namespace std;
class RabinKharp
{
	private:
		string t,p;
	public:
		RabinKharp()
		{
			input();
		}
		RabinKharp(string t,string s)
		{
			this->t=t;
			this->p=s;
		}
		void input()
		{
			cout<<"Enter the Text";
			cin>>t;
			cout<<"Enter the Pattern";
			cin>>p;
		}
	void Search()
		{
			int t_l=t.length(),p_l=p.length();
			int flag=0,i;
			int arr[t_l-p_l];
			for(int i=0;i<t_l-p_l;i++)
			{
				arr[i]=i;
			}
			for(i=0;i<(t_l-p_l);i++)
			{
				flag=0;
				if(t[arr[i]]==p[0])
				{	flag++;
					for(int j=1;j<p_l;j++)
					{
						if(t[i+j]==p[j])
						{
							flag++;
						}
						else
							break;
					}
				}
				if(flag==p_l)
					cout<<arr[i];	
			}
		
		}
		void test()
		{
			int i,j;
			cin>>i>>j;
			for(;i<j;i++)
			{
				cout<<t[i];
			}
		}
};
int main()
{
	RabinKharp obj;
	obj.Search();
	obj.test();
}
