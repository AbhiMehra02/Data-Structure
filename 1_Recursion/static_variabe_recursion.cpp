#include<iostream>
using namespace std;

int static_v(int a)
{
   static int x=5; 
  
    if(a>0)
    {
        cout<<" "<<x<<" "<<a<<"\n";

     return    static_v(a-1)+x;
    }
    cout<<" "<<x<<" "<<a<<"\n";
    return 0;
}


int main()
{
    int n;
    cin>>n;
    cout<<"Indirect Recursion: ";
    cout<<static_v(n);

        return 0;
}