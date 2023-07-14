#include<iostream>
#include<stdio.h>
using namespace std;

void Display(int A[],int n,int len)
{
    for(int i=0;i<len;i++)
     cout<<A[i]<<" ";

    cout<<endl;
}

void Add(int A[],int n,int x,int& len)
{
    
   if(n>len)
   {
        A[len]=x;
        len++;
   }
}


void Insert(int A[],int n,int& len,int index, int x )
{
    
   if(n>len  && index<len )
   {
        for(int i=len;i>index;i--)
        {
            A[i]=A[i-1];
        }
        A[index]=x;
        len++;
   }

}


void Delete(int A[],int index,int& len)
{
    if(index<len)
    {
      for(int i=index;i<len-1;i++)
        A[i]=A[i+1];  
    }
    len--;
}

//linear search
int L_Search(int A[], int key,int& len)
{ 
    for(int i=0;i<len;i++)
    {
        if(A[i]==key)
         return i;
    }
  return -1;
}

void swap(int &i, int &j)
{
      int c=i;
      i=j;
      j=c;
}
//linarch search 1.transpositon
int L_Search_trans(int A[],int key,int& len)
{
     for(int i=0;i<len;i++)
     {
        if(key==A[i])
        {
            swap(A[i],A[i-1]);
             return i-1;
        }

     }
     return -1;
}

//linear search 2.move to head 
int L_Search_head(int A[],int key,int& len)
{
     for(int i=0;i<len;i++)
     {
        if(key==A[i])
        {
            swap(A[i],A[0]);
             return 0;
        }

     }
     return -1;
}
int main()
{
    int n,l;
    cin>>n>>l;
    int Arr[l];
  
    for(int i=0;i<l;i++)
     cin>>Arr[i];

    cout<<endl;
   

 //   Add(Arr,n,5,l); 

  //  Display(Arr,n,l);

  //  Insert(Arr,n,l,1,6);
  
 //   Delete(Arr,0,l);  
    int a=L_Search_trans(Arr,3,l);
    cout<<a<<endl;
    
    Display(Arr,n,l);
    return 0;
}