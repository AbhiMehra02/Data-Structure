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

void Mer(int A[],int B[],int C[],int a,int b)
{
    int i=0,j=0,n=0;
    while(i<a || j<b)
    {
        if(A[i]>B[j])
        {
            C[n++]=B[j++];
            
        }
        else
        {
            C[n++]=A[i++];
        }
    }
  /*  for(;i<a;)
      C[n++]=A[i++];
    for(;j<b;)
     C[n++]=B[j++];
*/
}

int main()
{
   
    int l,m;
    cin>>l>>m;
    
    cout<<"#"<<endl;
    int Arr[l],Brr[m];
    for(int i=0;i<l;i++)
     cin>>Arr[i];
    
    cout<<"#"<<endl;

    for(int i=0;i<m;i++)
     cin>>Brr[i]; 

    int j=m+l;
    int Crr[j];
    
    Mer(Arr,Brr,Crr,l,m);

    cout<<endl;
    Display(Crr,j);
    return 0;
}