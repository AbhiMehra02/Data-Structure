#include<iostream>
using namespace std;

struct dnode
{
  dnode* pre;
  int data;
  dnode* next;
};

void create(dnode* &n,dnode* &m ,int x)
{
    
    while(x--)
    {
        dnode* temp=new dnode;
        int a;
        cin>>a;
        temp->data=a;
        if(n==NULL)
        {
            temp->pre=NULL;
            temp->next=NULL;
            n=temp; 
            m=temp;
        }
        else
        {
            temp->pre=NULL;
            temp->next=n;
            n->pre=temp;
            n=temp; 
        }
    }
}

void Insert(dnode* &n ,dnode* &m)
{
    int a;
    cin>>a;
    dnode* t=new dnode;
    t->data=a;
    if(n==NULL)
    { 
       t->next=NULL;
       t->pre=NULL;
       n=t;
       m=t;
    }
    else
    {
       t->pre=NULL;
       t->next=n;
       n->pre=t;
       n=t;
    }

}

void display(dnode *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}

void Reverse(dnode* m)
{
   while(m!=NULL)
   {
     cout<<m->data<<" "; 
     m=m->pre;
   }
}

int main()
{
 dnode* First=NULL;
 dnode* Last=NULL;
 create(First,Last,5);
 cout<<endl;
 display(First);
 Insert(First,Last);
 cout<<endl;
 display(First);
 cout<<endl;
 Reverse(Last);
  cout<<endl;
 display(First);
 return 0;

}
