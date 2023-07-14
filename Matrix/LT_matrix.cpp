#include<iostream>
using namespace std;

int len(int n)
{
    return (n*(n+1))/2;
}
void elein(int A[],int n)
{   
    int l=len(n); 
    int i=0;
    for(;i<l;i++)
     cin>>A[i];
}
// ROW MAJOR
// 1. search element in matrix at specific index using row major formula
void searchR(int A[],int n,int r,int c)
{
    int l =len(n);
   int s =((r*(r+1))/2)+(c);
   if(s<l && r>=c)
    cout<<s<<" "<<A[s];
   else
    cout<<s<<" "<<n<<"Invalid index";
   cout<<endl;  
}

// Column Major
void searchC(int A[],int n, int r,int c)
{   
   int l=len(n); 
   int s= ((c*(c-1))/2)+(r-1);
   if(s<l)
    cout<<A[s];
   else
    cout<<"Invalid index";
   cout<<endl;    
}

Display\

// void R_major(int A[],int l)
// {
//     for(int i=0;i<l;i++)
//     {
//         for(int j=0;j<l;j++)
//         {
//             if(  )
//         }
//     }
// }


int main()
{
    int n;
    cin>>n;
    int A[ ]={0,1,2,3,4,5};
    //elein(A,n);
    cout<<endl;
    int r,c;
    cin>>r>>c;
    searchR(A,n,r,c);
    return 0;
}