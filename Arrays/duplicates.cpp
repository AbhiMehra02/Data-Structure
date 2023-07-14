
#include<iostream>
using namespace std;


//sorted array
//method 1

void duplicate(int A[],int n)
{
    int ld=0;
   for(int i=1,j=0;i<n;)
   {
       if(A[i]!=A[j])
         {
            i++;
            j++;
         }  
        else 
        {
           if(ld!=A[i]) 
            cout<<A[i]<<" ";
            ld=A[i];
            i=i+2;
            j=j+2;
        }
   } 
}
//same as previous but some modification
void duplicate_modi(int A[],int n)
{
    int ld=0;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1] && ld!=A[i])
        {
            cout<<A[i]<<" ";
        }
    }
}

//count duplicates
void count_duplicates(int A[],int n)
{
      int count=0,ld=0;
    for(int i=1,j=0;i<n;)
   {
       if(A[i]!=A[j])
         {
            i++;
            j++;
         }  
        else 
        {
           if(ld!=A[i]) 
            count++;
          ld=A[i];
          i=i+2;
          j=j+2;
        }
   } 
     
     cout<<"\n"<<count;
}

void count_dupli_modi(int A[],int n)
{
    int j,count=0;
    for(int i=0;i<n-1;i++)
    {  
        if(A[i]==A[i+1])
        { j=i+1;
            while(A[j]==A[i]) j++;
            i=j-1;
          count++;
        }
    }
    cout<<endl<<count;
}

//duplicates using hashing;
//this method is same for both to find duplicates in sorted array 
//and no of ocurrence in both sorted and unsorted
void dupli_hash(int A[],int n)
{
    int l=A[n-1]+1;
    int H[l]={0};
    int count=0;
    for(int i=0;i<n;i++)
    {
        H[A[i]]++;
    }
    for(int i=1;i<l;i++)
    {
         if(H[i]>1)
          count++;
    }
    cout<<count;
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

    dupli_hash(Arr,len);
  
    return 0;
}