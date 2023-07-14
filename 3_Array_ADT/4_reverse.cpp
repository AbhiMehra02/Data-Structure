#include<iostream>
using namespace std;

//method 1
//using swap

void swap(int &a,int &b)
{
    int c=a;
    a=b;
    b=c;
}
int Reverse(int A[],int l)
{
  for(int i=0;i<l/2;i++)
  {
    swap(A[i],A[l-i-1]);
  }
}

//using array;
void Reverse_A(int A[],int n)
{
    int B[n];
    for(int i=0;i<n;i++)
      B[i]=A[n-i-1];
    
    for(int i=0;i<n;i++)
     A[i]=B[i];

}

//whether the array is sorted or not
int IsSorted(int A[],int n)
{
    for(int i=0;i<n-1;i++)
     {
        if(A[i]>A[i+1])
         return -1;
     }   
     return 1;

}

int main()
{
    int A[]={1,4,5,5,5,6,6};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<IsSorted(A,size)<<endl;
    Reverse(A,size);
    for(int i=0;i<size;i++)
    cout<<A[i]<<" ";
    cout<<endl<<IsSorted(A,size);
    
    return 0; 
}