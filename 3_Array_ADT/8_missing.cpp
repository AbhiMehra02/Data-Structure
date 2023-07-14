#include<iostream>
using namespace std;

//single missing element in sorted n natural number begin from 1
// 1 2 3 4 _ 6 7 8
int missing(int A[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
      sum+=A[i]; 
    int s=(A[n-1]*(A[n-1]+1))/2;  
    return s-sum;
}

// single missing element in sorted n natural number begin from any natural number
// 6 7 8 _ 10 11 12
int missing2(int A[],int n)
{
    int  diff=A[0];
    for(int i=0;i<n;i++)
      if((A[i]-i)!=diff)
        return A[i]-1;
    return -1;
}

// multiple missing elment in sorted array begin with any natural number
// 5 6  7 _  _ 9 _ 11 12  _ 13 
void multi_missing(int A[],int n)
{
    int diff=A[0];
    for(int i=0;i<n;i++)
    {
        if(diff!=(A[i]-i))
        {
          int c=A[i]-i;
          while(diff<c)
          { 
            cout<<diff+i<<" ";
            diff++;
          }
        }
    } 
}

// using  hashing
void hashing(int A[],int n)
{
  int max=A[n-1]+1;
  int H[max]={0};
  
  for(int i=0;i<n;i++)
    H[A[i]]++;

  for(int i=A[0];i<max;i++) 
    if(H[i]==0)
     cout<<i<<" ";
     
}

int main()
{
    int A[]={1,2,3,5,6};
    int B[]={6,7,8,10,11,12};
    int C[]={5,6,8,9,11,15};
    //       0 1 2 3   4  5
    //       5 5 6 8  8  10

    // method 1
    // int len=sizeof(A)/sizeof(A[0]);
    // int m=missing(A,len);
    // cout<<m;
    
    //mehod 2
    // int len=sizeof(B)/sizeof(B[0]);
    //int m=missing2(B,len);
    //cout<<m;
     
    //method 3
    //int len=sizeof(C)/sizeof(C[0]);
    //multi_missing(C,len);

    //method 4 hasing
    int len=sizeof(C)/sizeof(C[0]);
    hashing(C,len);

    return 0;
}