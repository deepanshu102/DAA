/***********************************************************
Q12:Naive
***********************************************************/
#include<iostream>
#include<limits>
#include<vector>
using namespace std;

class Native
{
	private:
		string t,p;
	public: Native()
		{
			input();
		}
		Native(string t,string p )
		{
			this->t=t;
			this->p=p;
		}
		void input()
		{

			cout<<"Enter your Text:- ";
			cin>>t;
			fflush(stdin);
			cout<<"\nEnter your Pattern:- ";
			cin>>p;
		}
		int search()
		{
			int shift=0,n=t.length(),m=p.length();
			int count=0,j;
			for(shift=0;shift<=n-m;shift++)
			{
				count=0;
				for(j=0;j<m;j++)
				{
					if(t[shift+j]==p[j])
						count++;
					else
						break;
				}
				if(j==m & count==m)
				{
						cout<<"Start:-"<<shift<<"\tend:-"<<shift+m<<endl;
				}
			}
			if(count==m)
			{
				cout<<"start:-"<<shift<<"\tend:-"<<shift+m;
			}		
			return 0;
		}
		
};
int main()
{
	Native obj;
	obj.search();
}
