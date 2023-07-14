#include<iostream>
using namespace std;

//find duplicates in sorted array
void Duplicate(int A[],int n)
{
    for(int j=0,i=1;i<n;i++)
    {
        if(A[j]!=A[i])
        {    
            if((i-j)!=1)
            { 
             cout<<A[j]<<" ";
            } 
            j=i;
        }
        if(A[j]==A[i] && i==(n-1))
         cout<<A[j]<<" ";

    }
}

//
void Duplicate_2(int A[],int n)
{
    int ld=0;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1] && A[i]!=ld)
        {
            cout<<A[i]<<" ";
            ld=A[i];
        }
    }
}

void Duplicate_3(int A[],int n)
{
    for(int  i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        { int j=i+1;
            while(A[j]==A[j+1])j++;
            cout<<A[i]<<" ";
            i=j-1;
        }
    }
}

//using hasing 
void hashing(int A[],int n)
{
    int max=A[n-1]+1;
    int H[max]={0};
    for(int i=0;i<n;i++)
     H[A[i]]++;

    for(int i=A[0];i<max;i++)
    {
        if(H[i]>1)
         cout<<i<<" ";
    } 
}



int main()
{
    int D[]={1,1,2,2,4,5,7,7,7,8,10,11,11,11};
    int len=sizeof(D)/sizeof(D[0]);
    
    Duplicate_3(D,len);
     cout<<endl;
    hashing(D,len);
    return 0;
}