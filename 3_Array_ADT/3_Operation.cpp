#include<iostream>
using namespace std;

void Display(int A[],int l )
{
    for(int i=0;i<l;i++)
     cout<<A[i]<<" ";
}

void Add(int A[],int n,int x,int &l)
{
    if(l < n-1)
     {
        A[l]=x;
        l++;

     }  
    else
    {
       cout<<"Array isn't Empty \n";
    }
}

void Insert(int A[],int n,int &l, int index, int x)
{
    if(l<=n-1)
     for(int i=l-1;i>=0;i--)
     {
        if(i!=index)
        {
           A[l]=A[l-1];    
        }
        else
        {
            A[i]=x;
            l++;
            break;
        }
     }
    
}

int main()
{
    int n;
    cin>>n;
    int B[n];
    int len;
    cin>>len;
    for(int i=0;i<len;i++)
    {
        cin>>B[i];
    }

    Display(B,len);
    cout<<endl;

    Add(B,n,4,len);
    
    Display(B,len);
    cout<<endl;

    Insert(B,n,len,2,5);
    Display(B,len);
    cout<<endl; 
    return 0;

}