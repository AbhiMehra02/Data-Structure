#include<iostream>
using namespace std;



int POW_modi(int num,int pow)
{
    if(pow==0)
     return 1;
    if(pow%2==0)
        return POW_modi(num*num,pow/2);  
    else
        return num*POW_modi(num*num,(pow-1)/2);
}

int POW(int num,int pow)
{
    if(pow==0)
     return 1;
    else
     return POW(num,pow-1)*num;
    
}



int main()
{
    int N,P;
    cin>>N>>P;
    cout<<POW(N,P)<<endl;
    cout<<POW_modi(N,P);
    return 0;
    
}