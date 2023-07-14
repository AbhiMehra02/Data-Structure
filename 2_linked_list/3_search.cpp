#include<iostream>
using namespace std;

//node
struct node
{
    int data;
    node *next;
};

//linked list
void linked_list(node*& n,int a)
{
    while(a--)
    {  
        node *l=new node;
        if(!n)
        {
            cin>>l->data;
            l->next=NULL;
            n=l;
        }
        else
        {
            cin>>l->data;
            l->next=n;
            n=l;
        }
    }
    cout<<endl;
}

// to display
void Display(node *n)
{
    while(n)
    {
      cout<<n->data<<" ";
      n=n->next;
    }
    cout<<endl;
}

// linear search
void Search(node *n,int key)
{
    int l=0,k=0;;
   while(n)
   { 
      
      if(key==n->data)
      { 
        l=1;
        break; 
      }
      k++;
      n=n->next;
   }
   if(l==1)
    cout<<key<<" found at index :"<<k;
   else
    cout<<"Invalid!!! "<<key;
   cout<<endl;  
}
//transposition
void Search_Trans(node*&  first,int key)
{
    int l=0,k=0;
    node *q=NULL;
    node *p=first;
    while(p!=NULL)
    {
        if(key==(p->data))
        {
            if(q!=NULL)
            {
              
            }
            l=1;

        }
        k++;
        q=p;
        p=p->next;
    }
}

//move to head
void Search_head(node*& first,int key)
{  
    int l=0,k=0;
    node *q=NULL;
    node *p=first;
    while(p!=NULL)
    {
        if(key==(p->data))
        {
          if(q!=NULL)
          {  
            q->next=p->next;
            p->next=first;
            first=p;
          }
          l=1;
          break;
        } 
        k++;
        q=p; 
        p=p->next;
    }
   if(l==1)
    cout<<key<<" found at index :"<<k;
   else
    cout<<"Invalid!!! "<<key;
   cout<<endl;  
}      

//move to head 
int main()
{    
    int a;
    cin>>a;
    struct node *first=NULL;
    linked_list(first,a);
    Display(first);
    Search_head(first,5);
    Display(first);
    return 0;
}