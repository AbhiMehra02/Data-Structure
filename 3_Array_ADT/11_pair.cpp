#include<iostream>
using namespace std;

// a+b=k //


void sum_pair(int A[],int n,int k)
{      
    int l=0;        
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if((A[i]+A[j])==k)
            {
                cout<<A[i]<<"+"<<A[j]<<"="<<k<<endl;  
                l=1;
            }    
    if(l==0)
     cout<<"None of the such pair exist!!!";        
     cout<<endl;
}


//for both sorted or not sorted;
//give unique pair if it is exist multiple time is will otherwise it will not
//using hashing
void Hash(int A[],int n,int k)
{  
    int max=INT32_MIN;
    for(int i=0;i<n;i++)
     {
        if(max<A[i])
         max=A[i];
     }
    
    int H[max+1]={0};
    for(int i=0;i<n;i++)
     H[A[i]]++;

    for(int i=0;i<=max;i++)
    {
        if(H[i]>0 && (H[k-i]>0) && ((k-i)>0 && (k-i)<max))
        {
            cout<<i<<"+"<<k-i<<"="<<k<<endl;
            H[k-i]--;
            
            H[i]--;
        }
    }    
    cout<<endl;   

}

//for both sorted and not sorted 
//give a unique pair at once only
void Hash2(int A[],int n,int k)
{  
    int max=INT32_MIN;
    for(int i=0;i<n;i++)
     {
        if(max<A[i])
         max=A[i];
     }
    
    int H[max+1]={0};
    for(int i=0;i<n;i++)
     H[A[i]]++;

    for(int i=0;i<=max;i++)
    {
        if(H[i]>0 && (H[k-i]>0) && ((k-i)>0 && (k-i)<max))
        {
            cout<<i<<"+"<<k-i<<"="<<k<<endl;
            H[k-i]=0;
            
            H[i]=0;
        }
    }       
    cout<<endl;
}

// if array is already sorted;
void sum_sort(int A[],int n,int k)
{
     for(int i=0,j=n-1;i<j;)
     {
        int s=A[i]+A[j]; 
        if(s==k)
        {
            cout<<A[i]<<"+"<<A[j]<<"="<<k<<"\n";
            i++;
            j--;
        }
        else if(s<k)
        {
            i++;
        }
        else
        {
            j--;
        }
     }
     cout<<endl;
}

int main()
{
    int A[]={3,6,3,8,10,6,2,7,9,14,5,11,4}; 
    int len= sizeof(A)/sizeof(A[0]);
    int k;
    cin>>k;
    //sum_pair(A,len,k);
    //cout<<"\n---------------------\n";

    // int B[]={1,1,2,3,4,5,6,8,8,10};
    // int l= sizeof(B)/sizeof(B[0]);
    // Hash(B,l,k);

    // Hash2(B,l,k);
    
    int S[]={1,2,3,4,7,8,9,11,15};
    int s=sizeof(S)/sizeof(S[0]);
    sum_sort(S,s,k);

    return 0;
}