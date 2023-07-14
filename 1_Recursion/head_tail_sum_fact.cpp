#include<iostream>
using namespace std;

void tail(int a)
{
    if(a>0)
    {
     cout<<a<<" ";
       tail(a-1);
    } 
}

void head(int a)
{
    if(a>0)
    {
      head(a-1);
      cout<<a<<" ";
     
    }
}

int sum(int a)
{ 
    if(a==0)
     return 0;
    else
     return sum(a-1)+a;

}

int factorial(int a)
{
    if(a==0)
     return 1;
    else
     return factorial(a-1)*a;
}

int main()
{
    int n;
    cin>>n;
    cout<<"head: ";
    head(n);
    cout<<"\n"<<"Tail: ";
    tail(n);
    cout<<"\n";
    cout<<"sum: "<<sum(n)<<endl<<"Factorial: "<<factorial(n);
        return 0;
}