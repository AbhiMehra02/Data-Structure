#include <iostream>
using namespace std;

// unsorted array finding duplicate
// O(n^2)
void duplicate_un(int A[],int n)
{   
    int B[n];
    for(int i=0;i<n;i++)
     B[i]=A[i];
    
    int l;
    int min=INT32_MIN;
    for(int i=0;i<n-1;i++)
    {   l=0;
        for(int j=i+1;j<n;j++)
        {   if(B[i]==B[j])
            {
                if(B[j]!=min)
                {
                 B[j]=min;
                  l++; 
                }
            }
        }
        if(l>0)
         cout<<B[i]<<" ";
    }
}     

// using hashing.  O(n)
void hashing(int A[],int n)
{   int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<A[i])
         max=A[i];
    }

    int H[max+1]={0};

    for(int i=0;i<n;i++)
      H[A[i]]++;
    
    for(int i=0;i<=max;i++)
     if(H[i]>1)
      cout<<i<<" "; 
}

int main()
{
    int A[]={8,1,13,10,8,1,9,5,10,8,13,7,15};
    int len=sizeof(A)/sizeof(A[0]);
    
    int D[]={8,1,-1,13,10,8,1,9,5,-1,10,8,13,7,-10,15,-10};
    int l=sizeof(D)/sizeof(D[0]);

    duplicate_un(D,l);
    cout<<endl;  
    
    hashing(A,len); 
    

    return 0;
}