#include<iostream>
using namespace std;

void TOH(int n, int A, int B, int C)
{ 
    if(n>0)
    {
        TOH(n-1,A,C,B);
        cout<<A<<"    "<<B<<"     "<<C<<"\n";
        TOH(n-1,B,A,C);
    }
}

int main()
{ 
    int A=1,B=2,C=3;
    int n;
    cin>>n;
    cout<<"To using From"<<"\n";
    TOH(n,A,B,C);

    return 0;
}