#include<iostream>
#include<climits>
using namespace std;
class BST
{
    private:class Node
            {
                public:Node()
                        {
                            ele=INT_MAX;
                            lf=rf=NULL;
                        };
                        Node(Node &temp)
                        {
                            ele=temp.ele;
                            lf=temp.lf;
                            rf=temp.rf;
                        }
                        void input()
                        {
                                cout<<"Enter the Value:-";
                                cin>>ele;
                        }

                        int get_ele()
                        {
                            return ele;
                        }
                        Node * get_Left()
                            {
                                return lf;
                            }
                        Node * get_Right()
                           {
                                return rf;
                           }
                        void set_Left(Node *temp)
                        {
                            lf=temp;
                        }
                        void set_Right(Node *temp)
                        {
                            rf=temp;
                        }
                        bool ele_greater(int element)
                        {
                                return (ele<element);
                        }
                private:int ele;
                        Node *lf,*rf;

            }*Root;
     public:BST()
            {
                Root=NULL;
            }
            bool check(Node *temp)
            {
                return (temp==NULL);
            }
            void create_Tree()
            {
                Node *temp=new Node();
                if(!check(temp))
                {
                    temp->input();
                    if(check(Root))
                    {
                            Root=new Node(*temp);
                    }
                    else
                    {
                        Node *curr,*next;
                        curr=next=Root;
                        while(!check(next))
                        {
                            curr=next;
                            if(next->ele_greater(temp->get_ele()))
                            {
                                next=next->get_Right();
                            }
                            else
                            {
                                next=next->get_Left();
                            }
                        }
                 if(curr->ele_greater(temp->get_ele()))
                        {
                            curr->set_Right(temp);
                        }
                        else
                        {
                            curr->set_Left(temp);
                        }
                    }
                }
            }
            void display(int i=1)
            {
                    display_ordered(Root,i);
            }
           void display_ordered(Node *root,int i=1)
            {

                if(i==1)
                {
                    if(!check(root))
                    {
                      display_ordered(root->get_Left(),i);
                       cout<<root->get_ele();
                      display_ordered(root->get_Right(),i);
                    }
                }
                else if(i==2)
                {
                        if(!check(root))
                        {
                            cout<<root->get_ele();
                            display_ordered(root->get_Left(),i);
                            display_ordered(root->get_Right(),i);
                        }
                }
                else if(i==3)
                {
                            if(!check(root))
                        {

                            display_ordered(root->get_Left(),i);
                            display_ordered(root->get_Right(),i);
                               cout<<root->get_ele();
                        }
                }
                return;
            }
};
int main()
{

    BST obk;
    obk.create_Tree();
    obk.create_Tree();
    obk.create_Tree();
    obk.display(3);
    //obk.create_Tree();
}
