#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0)
     return 1;
    else
     return fib(n-1)*n;
}


int combi(int n, int r)
{
    if(n>=r)
    {
       int a= fib(n-r);
       int b= fib(r);
       int c=fib(n);

        return c/(b*a);
    }
   return -1;
}

int fib_modi(int n,int r)
{
    if(n==r)
     return 1;
    else
     return fib_modi(n-1,r)*n;
}

int combi_modi(int n,int r)
{
    if(n>=r)
    {
       int c=fib_modi(n,n-r);
       int a=fib_modi(r,0);

        return c/a;
    }
   return -1;

}

int main()
{
    int n,r;
    cin>>n>>r;
    
    cout<<combi(n ,r)<<endl;

    cout<<combi_modi(n,r);
    return 0;
}