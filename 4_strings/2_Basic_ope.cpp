#include<iostream>
using namespace std;


int length(char A[])
{   
    int i=0;
    for(i=0;A[i]!='\0';i++)
    {}
    return i;
}

void Display(char A[])
{
    int l=length(A);
    for(int i=0;i<l;i++)
     cout<<A[i];
    cout<<endl; 

}

int Change_Case(char A[])
{   int l=length(A);
    for(int i=0;i<l;i++)
    {
        if(A[i]>=65 && A[i]<=90)
          A[i]=A[i]+32;
        else if(A[i]>=97 && A[i]<=122)
          A[i]=A[i]-32;
    }
}

void count_VC(char A[])
{   int l=length(A);
    int v=0;
    int c=0;
    int w=0;
    for(int i=0;i<l;i++)
    {   
        if(A[i]=='A' || A[i]=='a' || A[i]=='e'|| A[i]=='E'|| A[i]=='i' || A[i]=='I' || A[i]=='o' || A[i]=='O' || A[i]=='u' ||A[i]=='U')
        {
            v++;    
        }
        else if ((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122))
          c++;  
        if(A[i]==' ' && A[i]!=A[i-1]  )
            if ((i-1)>=0)
                 w++;  
    }
    cout<<"Vowel:"<<v<<" Constant :"<<c<<endl
        <<"Word :";

    if(A[l-1]==' ')    
     cout<<w<<endl; 
    else
     cout<<w+1<<endl;
     
 
}
int main()
{
   char C[]="WeLcOmE";
   char C1[10]="john"; // or  C1[10]={'j','o','h','n'}
   char C2[]="Do you Know?";
    // cout<<length(C)<<endl;
    // cout<<length(C1);
    // Display(C1);
    // Change_Case(C1);
    Display(C2);
    count_VC(C2);
   return 0;

}