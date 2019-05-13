#include <iostream>
#include <set>
#include "Graph.h"

int main ()
{
/*  int myints[] = {75,23,65,42,13};
  std::set<int> myset (myints,myints+5);

  std::cout << "myset contains:";
  for (std::set<int>::iterator it=myset.begin(); it!=myset.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';
*/
	Graph head;
//	head.create_graph();
	head.Sort();
	head.show_data();
//	head.Display();
  return 0;
}
/*template <class T>
class Ele
{
	private: 
		T ele;
		Ele *next;
	public:
		Ele()
		{
			next=NULL;
		}
		void create_block(T ele)
		{
			this->ele=ele;
			this.next=NULL;
		}
		void insert(Ele &t)
		{
			this->ele=t.ele;
			this.next=t.next;
		}
		T get_ele()
		{
			return ele;
		}
		bool find(T ele)
		{
			if(this->next==NULL)
			{
				return false;
			}
			if(this->ele==ele)
			{
				return true;
			}
			else
			{
				return find((this->next)->ele);
			}
		}
		void insert_at_end(ele &k)
		{
			if(this->next==NULL)
			{
				this->next=k;
			}
			else
			{
				(this->next)->insert_at_end(k);
			}
		}
};
template <class T>
class Set
{
	private:Ele *t;
		Set *N;
		
		int size;
		T root;
	public:
		Set()
		{
			root=NULL;
			t=NULL;
			
			size=0;
		}
		void insert(T ele)
		{
		
			Ele *k=new Ele();
			if(k!=NULL)
			{
				k->create_block(ele);
				if(t==NULL)
				{
					t->insert(k);
					size++;
					root=t->get_ele();
				}			
				else
				{
					if(!t->find(ele))
					{
						size++;
						t->insert_at_end(k);
					}
					
				}
			}		

			
		}
}
*/

