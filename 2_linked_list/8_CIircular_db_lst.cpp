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
            temp->pre=temp;
            temp->next=temp;
            n=temp; 
            m=temp;
        }
        else
        {
            temp->pre=m;
            m->next=temp;
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
       t->next=t;
       t->pre=t;
       n=t;
       m=t;
    }
    else
    {
       t->pre=m;
       m->next=t;
       t->next=n;
       n->pre=t;
       n=t;
    }

}

void display(dnode *n)
{
    dnode *a=n;
    do
    {
        cout<<n->data<<" ";
        n=n->next;
    }while(a!=n);
}

void Reverse(dnode* m)
{
   dnode *a=m;
   do
   {
     cout<<m->data<<" "; 
     m=m->pre;
   }while(a!=m);
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
