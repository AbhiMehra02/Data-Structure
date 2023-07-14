#include<iostream>
using namespace std;

void I_RecB(int );

void I_RecA(int a)
{
    if(a>0)
    {
     cout<<a<<" ";
       I_RecB(a-1);
    } 
}

void I_RecB(int a)
{
    if(a>1)
    {
        cout<<a<<" ";
        I_RecA(a/2);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<"Indirect Recursion: ";
    I_RecA(n);

        return 0;
}