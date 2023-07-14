#include<iostream>
using namespace std;

void compare(char A[],char B[],int a,int b)
{   int i,j,k=0;
    for( i=0,j=0;A[i]!='\0' && B[j]!='\0';)
    {
           if(A[i]!=B[j])
             k=1;

            if(A[i]!='\0')
             i++;
            if(B[i]!='\0')
             j++;
    }
    if( k==0 )
         cout<<"equal";
    else 
      if(i>j)
       cout<<"greater";
      else 
       cout<<"smaller";

       cout<<endl;

}

int main()
{
   int n,m;
   cin>>n>>m;

   char Arr[n],Brr[m];

   for(int i=0;i<n;i++)
    cin>>Arr[i];

   for(int i=0;i<m;i++)
    cin>>Brr[i];

    compare(Arr,Brr,n,m);
    
    return 0;
}