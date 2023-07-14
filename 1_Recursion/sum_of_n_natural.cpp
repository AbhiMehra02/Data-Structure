#include<iostream>
using namespace std;

int Sum_natural(int n)
{
    if(n==0)
     return 0;
    else
    return Sum_natural(n-1)+n;
}
int main()
{
    int a;
    cin>>a;
    cout<<Sum_natural(a);
    return 0;
    
}