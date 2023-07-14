
#include<iostream>
using namespace std;



// when sequence is natural no 
 //method 1. single missing element : 1,2,3,4,....
 //[(n+1)*n]/2=sum
void  Missing(int A[],int n)
{
 
   int sum=(A[n-1]*(A[n-1]+1))/2,s=0;
   
   for(int i=0;i<n;i++)
   {
       s=s+A[i];
   }

   cout<<sum-s;
}

//method 2: 7,8,9,.....
void Missing_2(int A[],int n)
{
   int diff=A[0]; 
    for(int i=1;i<n;i++)
    {
        if(A[i]-i!=diff)
        {  
            cout<<i+diff<<" ";
            break;
        }
       
    }
}

//method 3
//multiple missing
void Missing_3(int A[],int n)
{
   int diff=A[0]; 
    for(int i=1;i<n;i++)
    {
        if(A[i]-i!=diff)
        {  
            while(diff!=(A[i]-i))
            {
                cout<<i+diff++<<" ";
            }

        }
       
    }
}

void missing_hash(int A[],int n)
{
    int l=A[n-1]+1;
    int H[l]={0};

    for(int i=0;i<n;i++)
    {
           H[A[i]]=1;
    }

    for(int i=1;i<l;i++)
    {
        if(H[i]!=1)
         cout<<i<<" ";
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
   
    missing_hash(Arr,len);
    return 0;
}