#include<iostream>
using namespace std;

int nested(int nes)
{
    if(nes>100)
     return nes-10;
    else
    return nested(nested(nes+11));
}
int main()
{
    int a;
    cin>>a;
    cout<<nested(a);
    return 0;
    
}