/****************************************************
	q13:RabinKharp
***************************************************/
#include<iostream>
#include<string>
#define d 256
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
			int flag=0,i,j;
			int p1=0,t1=0,q=101;
			for(int i=0;i<p_l;i++)
			{
				p1=((p1+p[i]))%q;
				t1=((t1+t[i]))%q;
			}
			for(i=0;i<=(t_l-p_l);i++)
			{
				j=0;	
				if(t1==p1)
				{
					for(j=0;j<p_l;j++)
					{
						if(t[i+j]!=p[j])
							break;
					}
				}
				if(j==p_l)
					cout<<"Found Patern Started from "<<i+1<<endl;	
				if(i<t_l-p_l)
				{
									t1=((t1-t[i])+t[i+p_l])%q;
				}

			}
		
		}
	
};
int main()
{
	RabinKharp obj;
	obj.Search();

}
