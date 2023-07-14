#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void linked_list(node*& n,int a)
{  

    while(a>0)
    {  
       node* t=new node;  
        if(!n)
        {  
            cin>>t->data;
            t->next=NULL;
            n=t;
        }
        else
        {  
            cin>>t->data;
            t->next=n;
            n=t;
        }
         a--;
    }
}

//iterative
int max(node *p)
{ 
    int max=INT32_MIN;
    while(p)
    { 
        if(p->data>max)
          max=p->data;
        p=p->next;
    }
    return max;
}

// recursion
int max2(node *p)
{
    int x=0;
    if(p==NULL)
     return INT32_MIN;
    else
    {
        x=max(p->next);
        if(x>p->data)
          return x;
        else
          return p->data;  
    } 
} 

//recursion
int max3(node *p)
{     
    int x=0;
    if(p==NULL)
     return INT32_MIN;
    
    x=max(p->next);
    return x>p->data?x:p->data;
     
}
int main()
{  
   int n;
   cin>>n;
   struct node *first=NULL;
   linked_list(first,n);
   cout<<endl;
   cout<<max2(first);
   cout<<endl;
   cout<<max3(first);
   return 0;
}