
#include<iostream>
using namespace std;

void Display(int A[],int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<A[i]<<" ";
    }
}

//A-B
int  Diff_Sort(int A[],int B[],int C[],int a,int b)
{
    int i=0,j=0,n=0;
    while(i<a && j<b)
    {
        if(A[i]>B[j])
        {
            j++;
            
        }
        else if(A[i]<B[j])
        {
          C[n++]= A[i++]; 
        
        }
        else
        {
            j++;
            i++;
        }
    }


return n;
  /*  for(;i<a;)
      C[n++]=A[i++];
    for(;j<b;)
     C[n++]=B[j++];
*/
}
int Diff_Unsort(int A[],int B[],int C[],int a,int b)
{
    int D[b],n=0;
    for(int i=0;i<b;i++)
    {
        D[i]=B[i];
    }
   
      
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(D[j]==A[i])
            {
                D[j]=-1 ;
                break ;
            }
            if(j==b-1)
            {
                C[n++]=A[i];
            }
        }
       
        cout<<endl;
        for(int i=0;i<b;i++)
         cout<<D[i]<<" ";
        cout<<endl;
    } 


  return n;
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

    int j;
    if(l<m)
     j=l;
    else
     j=m;

    int Crr[j];
    int k;
  
   // to perform Brr-Arr interchange position
    //k= Diff_Sort(Arr,Brr,Crr,l,m);
     k=Diff_Unsort(Arr,Brr,Crr,l,m);
    cout<<endl;
    Display(Crr,k);
    return 0;
}