#include<iostream>
using namespace std;

int  Union(int A[],int B[],int a,int b,int C[])
{    int i,j,k=0; 
     for(i=0,j=0;i<a && j<b;)
     { 
 
        if(A[i]<B[j])
        {
            C[k++]=A[i++];
        }
        else if(A[i]>B[j])
        {
            C[k++]=B[j++];
        }
        else
        {
            C[k++]=A[i++];
            j++;
        }
     }

    if(j!=b)
    {  i=j;
       a=b; 
    }

    for(i;i<a;i++)
     C[k++]=B[i];
    
    return k;
}

int InterSec(int A[],int B[],int a,int b,int C[])
{
    int i,j,k=0; 
     for(i=0,j=0;i<a && j<b;)
     { 
 
        if(A[i]<B[j])
        {
            i++;
        }
        else if(A[i]>B[j])
        {
           j++;
        }
        else
        {
            C[k++]=A[i++];
            j++;
        }
    }
    
    return k;

}

// A-B
int A_B(int A[],int B[],int a,int b,int C[])
{
    int i,j,k=0;
   for(i=0,j=0;i<a && j<b;)
    {
        if(A[i]==B[j])
         {
            i++;
            j++;
         }
         else if(A[i]<B[j])
         {  
            C[k++]=A[i++];
         }
         else
         {
            j++;
         }
    }

    if(i<a)
    { 
        for(;i<a;i++)
        {
            C[k++]=A[i++];
        }

    }

    return k;
}

int main()
{    
    int A1[]={1,3,5,8,12}; 
    int B1[]={1,3,5,7,10,11,13};
    int a=sizeof(A1)/sizeof(A1[0]);
    int b=sizeof(B1)/sizeof(B1[0]);
    
    //  cout<<"UNION"<<endl;
    // //for union 
    //  int d=a+b;
    //  int D[d];
    //  int k=Union(A1,B1,a,b,D);
    //  for(int i=0;i<k;i++)
    //  cout<<D[i]<<" ";


    cout<<"\nINTERSECTIION"<<endl;
    //for intersection
     int e;
     if(a>b)
       e=b;
     else 
       e=a;
    int E[e];
    int l=InterSec(A1,B1,a,b,E);
    for(int i=0;i<l;i++)
     cout<<E[i]<<" ";

    // cout<<"\nB1-A1"<<endl;
    // //A-B
    // int c;
    // if(a>b)
    //  c=a;
    // else
    //  c=b;
    // int C[c];
    // int m=A_B(B1,A1,b,a,C);
    // //int m=A_B(A1,B1,a,b,C);
    // for(int i=0;i<m;i++)
    //  cout<<C[i]<<" ";

    return 0;
}