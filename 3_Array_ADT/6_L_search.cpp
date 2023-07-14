#include<iostream>
using namespace std;

int L_search(int A[],int n,int len)
{ 
  
    for(int i=0;i<len;i++)
    {
        if(A[i]==n)
         return i;
    }
    return -1;   
}

void swap(int &a , int &b)
{
    int c=a;
    a=b;
    b=c;
}

int trans_LS(int A[],int n,int len)
{
   for(int i=0;i<len;i++)
   {
      if(A[i]==n)
       {
        if(i!=0)
        {
         swap(A[i],A[i-1]);
         return i-1;
        }
        else
        return i; 
       }
       
   }
   return -1;
}

int MF_Ls(int A[],int n,int len)
{
   for(int i=0;i<len;i++)
   {
    if(A[i]==0)
    {
            swap(A[i],A[0]);
            return 0;
    }
   }
   return -1;
}
int main()
{
    int A[]={22,32,5,7,35,7,2,452,23,52};
    int n;
    cin>>n;
    int size=sizeof(A)/sizeof(A[0]);
    int s=trans_LS(A,n,size);
         cout<<s;
  return 0;
}

