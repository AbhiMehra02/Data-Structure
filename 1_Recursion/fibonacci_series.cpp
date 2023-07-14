/*fibonacci series  :  0 1 1 2 3 5 8 13 21 34 ..........
                  n :  0 1 2 3 4 5 6 7  8  9  ..........
  h0w the function or series it will work ?
          ____
         |     0                      n=0  
 fib(n)= |     1                      n=1
         |____fib(n-2)+fib(n-1)       n>1   
            
*/
#include<iostream>
using namespace std;

int fib(int);



int fib_sum(int n)
{

   if(n==0)
     return 0;
  else
   { 
      return fib_sum(n-1)+fib(n);
   }
}

int fib(int n)
{
    if(n<=1)
     return n;
    
    return fib(n-2)+fib(n-1);

    
}

int fib_modi(int n)
{
    int F[n]; 
    for(int i=0;i<n;i++)
      F[i]=-1;

     if(n<=1)
      return 0;
    else
     {
        if(F[n-2]==-1)
         F[n-2]=fib(n-2);
        if(F[n-1]==-1)
         F[n-1]=fib(n-1);

         return F[n-2]+F[n-1];
     } 

 
}


int main()
{
    int term ;
    cin>>term;

   
     
    cout<<fib(term)<<endl;
    cout<<fib_sum(term)<<endl; 
    cout<<fib_modi(term); 

    return 0;
}
 
