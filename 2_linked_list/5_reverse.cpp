#include<iostream>
#include<vector>
using namespace std;

struct node
{
    int data;
    node *next;
};

void Create(node*& n,int x)
{
    while(x--)
    {   
        int a;
        cin>>a;
        node* temp=new node;
        temp->data=a;
        if(n==NULL)
        {
            temp->next=NULL;
            n=temp;
        }
        else
        {
            temp->next=n;
            n=temp;
        } 
    }    
}

void display(node *n)
{
   while(n!=NULL)
   {
    cout<<n->data<<" ";
    n=n->next;
   }
  
}

void reverse_links(node*& n)
{
    node *t1= new node;
    node *t2= new node;
    t1=n;
    t2=n->next;
    int t=0;
    while(t2!=NULL)
    {
        node *temp;
        temp=t1;
        if(t==0)
        {
            t1->next=NULL;
            t1=t2;
            t2=t2->next;
            t=1;
        }
        else
        {
            t1=t2;
            t2=t2->next;
        }
        t1->next=temp;
    }
    n=t1;
}

void ele(node* n,int A[])
{
    int i=0;
    while(n!=NULL)
    {    
        A[i]=n->data;
        n=n->next;
        i++;
    }
}
void reverse_data(node* &n, int len)
{ 
    int A[len];
    ele(n,A);
    len=len-1;
    node *temp=new node;
    temp=n;
    while(n!=NULL)
    {
        n->data=A[len];
        n=n->next; 
        len=len-1;
    }
    n=temp;
}

void Recursive(node*& n,node *q,node*p)
{
  if(p==NULL)
  {
   n=q;  
  }
  else
  {
    Recursive(n,p,p->next);
    p->next=q;
    if(p==q)
     p->next=NULL;
  }


}

int main()
{   
    int n=5;
    node* First=NULL;
    Create(First,n);
    display(First);
    cout<<endl;
    reverse_links(First);
    display(First);
    cout<<" :Links"<<endl;
    reverse_data(First,n);
    display(First);
    cout<<" :element"<<endl;
    Recursive(First,First,First);
    display(First);
    cout<<" :Recursive";
    return 0;
}