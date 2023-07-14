//positive on right and negative on right
#include<iostream>
using namespace std;

void Display(int A[],int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<A[i]<<" ";
    }
}

void swap(int& a, int& b)
{
    int c=a;
    a=b;
    b=c;
}

void PR_NL(int A[],int len )
{
    for(int i=0,j=len-1;i<j;)
    {   
             while (A[i]<0)
             {
               i++;
             }
             while(A[j]>=0)
             {
                j--;
             }

             if(i<j) 
              swap(A[i],A[j]);
             
    }
}

int main()
{
   
    int l;
    cin>>l;
    
    int Arr[l];
    for(int i=0;i<l;i++)
     cin>>Arr[i];

    Display(Arr,l);
    cout<<endl;
    PR_NL(Arr,l);
    Display(Arr,l);
    return 0;
}