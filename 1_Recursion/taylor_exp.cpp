#include<iostream>
using namespace std;

float taylor(float x,float n)
{
   static float p=1,f=1, r;
   if(n==0)
   {
     return 1;
   }
   else
   {
    r=taylor(x,n-1);
    p=p*x;
    f=f*n;
    return r+(p/f);
   }

}


float taylor_modi(float x,float n)
{
  static  float r=1;
    
  if(n==0)
   return r;

   r=(1+(x/n)*r);
   return taylor_modi(x,n-1); 
}

int main()
{
    float base,term;
    cin>>base>>term;
    cout<<"\n"<<taylor_modi(base,term);
    cout<<"\n"<<taylor(base,term);

    return 0;
}