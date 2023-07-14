
#include<iostream>
#include<stdio.h>
using namespace std;

// only when array is sorted or increasing order 
int  Binary_search(int A[],int& len,int key)
{
     int a=0,b=len,mid;
     while(a<=b)
     {
        mid=(a+b)/2;
        if(A[mid]==key)
           return mid;
        else if(key<A[mid])
          b=mid+1;
        else
          a=mid-1;
     } 
     return -1;
}

//recusrsive method
int R_Binary(int A[],int l,int key,int a=0)
{
  int  mid=(l+a)/2; 
  if(l>=a)
   if(key==A[mid])
    return mid;
   else if(key<A[mid])
    return R_Binary(A,mid,key,a);
   else
    return R_Binary(A,l,key,mid);
  else
   return -1; 
}

int main()
{
     int n,l;
    cin>>n>>l;
    int Arr[l];
  
    for(int i=0;i<l;i++)
     cin>>Arr[i];

 int key;
 cin>>key;
cout<<R_Binary(Arr,l,key);

return 0;
}