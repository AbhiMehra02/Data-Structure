#include<iostream>
using namespace std;

void Display(int A[],int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<A[i]<<" ";
    }
}

void Reverse(int A[],int l )
{
    for(int i=0;i<l/2;i++)
    {    
         int c=A[i];
         A[i]=A[l-i-1];
         A[l-i-1]=c;

    }
}

int main()
{
    int n;
    cin>>n;
    int l;
    cin>>l;
    
    int Arr[l];
    for(int i=0;i<l;i++)
     cin>>Arr[i];

    Display(Arr,l);
    cout<<endl;
    Reverse(Arr,l);
    cout<<endl;
    Display(Arr,l);
    return 0;
}