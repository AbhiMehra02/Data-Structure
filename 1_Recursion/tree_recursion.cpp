#include<iostream>
using namespace std;

void tree(int a)
{
   
  
    if(a>0)
    {
     cout<<"\n"<<a; 
     tree(a-1);
     tree(a-1);
    }
}


int main()
{
    int n;
    cin>>n;
    cout<<"Tree Recursion: ";
    tree(n);

        return 0;
}