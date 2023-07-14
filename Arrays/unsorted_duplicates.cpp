
#include<iostream>
using namespace std;



void duplicate(int A[],int n)
{
    int count;
   for(int i=0;i<n-1;i++)
   {
     count=1;
      if(A[i]!=-1)
      {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]==A[j])
            {
                 count++;
                 A[j]=-1;
            } 
        }
      
      cout<<A[i]<<" "<<count<<endl;
      }
   }
  
}

void duplicates_hash(int A[],int n)
{
    int l=A[n-1]+1;
    int H[l]={0};

    for(int i=0;i<n;i++)
    {
        H[A[i]]++;
    }
    for(int i=1;i<l;i++)
    {
        if(H[i]>1)
         cout<<i<<" "<<H[i]<<endl;
    }
}


int main()
{
    int len;
    cin>>len;
    int Arr[len];

    for(int i=0;i<len;i++)
    {
        cin>>Arr[i];
    }

  duplicate(Arr,len);
    
  
    return 0;
}