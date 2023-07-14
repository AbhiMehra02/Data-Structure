#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void Create(node * &n ,int x)
{
    node* p=new node;

    while(x--)
    {
        node *temp=new node;
        int a;
        cin>>a;
        temp->data=a;
        if(n==NULL)
        { 
           n=temp;
           temp->next=n; 
           p=temp;
        }  
        else
        {  
           temp->next=n; 
           p->next=temp;
           p=temp; 
        }
    }
}

void insert(node* &n ,int pos,int x)
{
    node* temp= new node;
    node* p   = new node;
    temp->data=x;
    if(pos==0)
    { 
        if(n==NULL)
        {
            n=temp;
            n->next=n;
        }
        else
        {
            p=n;
            while(p->next!=n) p=p->next;
            p->next=temp;
            temp->next=n;
            n=temp;
        }           
    }
    else
    {
        int l=0;
        p=n;
        while(p->next!=n) 
        { 
          l++;  
          p=p->next;
        }
        p=n;
        if(pos<=l)
        {
         for(int i=0;i<pos-1;i++)
          p=p->next;
         temp->next=p->next;
         p->next=temp;

        }
        else
         cout<<"Invalid pos:"<<pos<<endl;  

    }
}
void display(node *n)
{ 
    node* temp=new node;
    temp=n;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(n!=temp);

}

void deletion(node* &n,int pos)
{  
    node *p=new node;
    if(pos==0)
    {
        p=n;
        if(n!=NULL && p->next!=n)
        { 
           while(p->next!=n)p=p->next;
           cout<<n->data<<" deleted: "; 
           n=n->next;   
           p->next=n; 
        }
        else if(n!=NULL && p->next==n)
        {
           cout<<n->data<<" deleted: ";
            p=NULL;
        }
    }
    else
    {
        int l=0;
        p=n;
        while(p->next!=n)
        {
            p=p->next;
            l++;
        }
        p=n;
        node *a=new node;
        if(pos<=l)
        {
            for (int i=0;i<pos-1;i++)
                p=p->next;
            a=p->next;
            cout<<a->data<<" deleted: ";
            p->next=a->next;
        }
    }


}

int main()
{
    node * head=NULL;
 
    Create(head,5);
    display(head);
    cout<<endl;

    int I[]={10,11,12};

    for(int i=0;i<3;i++)
    {
        insert(head,i,I[i]);
        display(head);
        cout<<endl;
    }
    
    int D[2]={0,1};
    for(int i=0;i<2;i++)
    {   
        deletion(head,D[i]);
        display(head);
        cout<<endl;
    }


    return 0;
}