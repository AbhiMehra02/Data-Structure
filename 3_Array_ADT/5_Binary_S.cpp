#include<iostream>
using namespace std;

/*
0. to apply this searching method require array must be sorted
1. Time complexivity of Bsearch is O(logn)
*/

// for binary search array must be sorted
int B_Search(int A[],int len,int x)
{
    int l=0;
    int r=len;
   for(int i=(l+r)/2;i<len;)
   { 
     if(A[i]==x)
     {
        return i;
     } 
     else if(A[i]>x)
     {
        r=i-1;
     }
     else
     {  
        l=i+1;
     } 
     i=(l+r)/2;

     if(l==r)
      return -1;
   }
  
}

//using while loop
int BiSearch(int A[],int len, int x)
{
    int l=0,mid=0;
    int r=len;
    while(l<=r)
    {  
        mid=(l+r)/2;
        if(x==A[mid])
         return mid;
        else if(x<A[mid])
         r=mid-1;
        else
         l=mid+1;
    }
    return -1;
} 

//using Recursive method
int  RBiSearch(int A[],int l,int r,int x)
{
    if(l<=r)
    {
        int mid=(l+r)/2;
        if(x==A[mid])
         return mid;
        else if(x<A[mid])
         return RBiSearch(A,l,mid-1,x);
        else
         return RBiSearch(A,mid+1,r,x);
    }
    return -1;
}

int main()
{
    int A[]={2,3,5,6,13,16,19,21,25,28,30,36,39,78};
    int x;
    cin>>x;
    int len=sizeof(A)/sizeof(A[0]);
    int s=RBiSearch(A,0,len,x);
    cout<<s;
    return 0;
}