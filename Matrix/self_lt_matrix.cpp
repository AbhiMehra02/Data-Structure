// Lower Traingular Matrix
#include<iostream>
using namespace std;

//row major
int row(int R,int C)
{ 
    int D=0;
    if(R>C)
    {
        D=(C*(C+1))/2;
        D=R+C;
    }
    else if(R<C)
    {
        D=((R+1)*R)/2;
        D=D+C-R;
    } 
    else
    {D=((R+1)*R)/2;}
    return D;
}
void LT_matrix(int A[],int a)
{  
cout<<a<<endl;
  for(int i=0;i<a;i++)
    cin>>A[i];
  cout <<"over...\n";  
}

void Display(int A[],int a,int r,int c)
{  
    int k=0; 
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i>=j && k<=a)
             cout<<A[k++]<<" ";
            else
             cout<<0<<" ";
        }  
     cout<<endl;
    } 
}

int main()
{   
    int R,C;
    cin>>R>>C;

    int D=row(R,C);
    int A[D];

    LT_matrix(A,D);
    Display(A,D,R,C);
return 0;
}