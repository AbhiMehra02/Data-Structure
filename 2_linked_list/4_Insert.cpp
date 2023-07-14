#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

//linked list using
void Insert(node*& f,node*& l)
{
  node *t=new node;
  t->next=NULL;
  cin>>t->data;    
  if(f==NULL && l==NULL)
  { 
    f=t;
    l=t;
  }
  else
  {
    l->next=t;
    l=t;  
  }

}

//sorting way
void Sort(node*& f)
{
    node *t=new node;
    cin>>t->data;
    
    node *q=new node;
    q=NULL;
    node *p=new node;
    p=f;
    
    while(p && p->data<t->data)
    {  
        q=p;
        p=p->next;
    }
    t->next=q->next;
    q->next=t;
    
}

void Display(node *f)
{
   while(f)
   {
    cout<<f->data<<" "; 
    f=f->next;
   }
   cout<<endl;
}

int main()
{ 
   node *first=NULL;
   node *last=NULL;
//    Insert(first,last);
//    Insert(first,last); 
   Sort(first);
   Sort(first);
   Sort(first);
   Sort(first);   
   Display(first);
  return 0;    
}