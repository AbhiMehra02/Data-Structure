
#include<iostream>
using namespace std;


//a+b=k one pair at a time means not give same pair multiple times
/* 
void pair_sum(int A[],int n,int s)
{
   int D[n],l;
   for(int i=0;i<n;i++)
    D[i]=A[i]; 
   for(int i=0;i<n-1;i++)
   { l=0;
        if(D[i]!=-1)
        {
            for(int j=i+1;j<n;j++)
            {
                    if(D[i]+D[j]==s &&  D[j]!=-1)
                    {
                        
                        if(l==0) 
                        {
                        cout<<A[i]<<"+"<<A[j]<<"="<<s<<endl;
                        l=1;
                        }
                        D[j]=-1;
                        
                    }
            }
        }    
   }
}
*/
//if pair available multiple times it give
void pair_sum(int A[],int n,int s)
{
   int D[n],l;
   for(int i=0;i<n;i++)
    D[i]=A[i]; 
   for(int i=0;i<n-1;i++)
   { 
        if(D[i]!=-1)
        {
            for(int j=i+1;j<n;j++)
            {
                    if(D[i]+D[j]==s &&  D[j]!=-1)
                    {
                        D[j]=-1; 
                        cout<<A[i]<<"+"<<A[j]<<"="<<s<<endl;  
                        break;       
                    }
            }
        }    
   }
}



//a+b=k using hasing
// for both sorted as well as unsorted
// H[i] assingn  0 rather than decrement it will give pair at once only
void pair_hash(int A[],int n,int s)
{
    int H[s+1]={0};

    for(int i=0;i<n;i++)
    {
      if(A[i]<=s)
       H[A[i]]++;
    } 

    for(int i=0;i<(s+1);i++)
    {
        if(H[i]!=0 && H[s-i]!=0)
        {    
           
                if(i==(s-i) )
                {
                    if(H[i]>=2)
                    {
                    cout<<i<<"+"<<s-i<<"="<<s<<endl;
                    }
                    H[i]--;
                }
                else
                {
                    cout<<i<<"+"<<s-i<<"="<<s<<endl;  
                    H[i]--;
                    H[s-i]--;
                }
             
        }
    }
   
}

// if all of them are differnt 
// if pair available multiple times it will 
// but not  for multiple pair single times only : 1,4,1,4,..
void pair_sorted(int A[],int n,int s)
{
    for(int i=0,j=n-1;i<j;)
    {
         if(A[i]+A[j]==s)
         {
             cout<<A[i]<<"+"<<A[j]<<"="<<s<<endl;  
             i++;
             j--;
         }
         else if((A[i]+A[j])>s)
         {
            j--;
         }
         else
         {
            i++;
         }
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
    int sum;
    cin>>sum;
    pair_sorted(Arr,len,sum);
    
  
    return 0;
}