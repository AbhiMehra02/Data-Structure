#include<iostream>
using namespace std;

struct Node
{
    int a;
    Node *next;
};

// Node *n call by value
// Node&* n call by reference
void linked_list(Node*& n,int a)
{
   
   while(a>0)
   { 
     Node* t= new Node;
     if(n==NULL)
     {  
        cin>>t->a; 
        t->next=NULL;
        n=t;
     }
     else
     {
        cin>>t->a;
        t->next=n;
        n=t;
     }
     a--;
   }
}

// add element
void Add(Node*& s,int x)
{   
    Node *n=new Node;
    n->a=x;
    n->next=s;
    s=n;
}

// delete
void Remove(Node*& s)
{ 
   Node *n=new Node;
   n=s; 
   n=n->next;
   cout<<"deleted element "<<s->a<<endl;
   s=n;
}

// Search
void Search(Node *n,int x)
{   
    int l=0,k=0;
    while(n)
    {   
        
        if((n->a)==x)
        {
          l=1;
          break;
        }
        k++;
        n=n->next;
    }
    if(l!=0)
     cout<<"it is present at "<<k<<endl;
    else
     cout<<"Not present"<<endl; 
}

// Max
int Max(Node *s)
{
    int m=INT32_MIN;
    while(s)
    { 
        if(s->a>m)
          m=s->a;
        s=s->next;  
    }
    return m;
}

void Display(Node *n)
{ 
    Node *s=n;
    while(s!=NULL)
    {
        cout<<s->a<<" ";
        s=s->next;
    }
}

int main()
{ 
    int a;
    cin>>a;
    struct Node *first=NULL;
    linked_list(first,a);
    cout<<endl;
    Display(first);
    Add(first,7);
    cout<<endl;
    Display(first);
    cout<<endl;
    Remove(first);
    cout<<endl;
    Search(first,3);
    cout<<endl;
    cout<<Max(first)<<endl;
    return 0;
}