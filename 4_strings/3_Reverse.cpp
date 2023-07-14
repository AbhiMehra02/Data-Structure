#include<iostream>
using namespace std;


int length(char A[])
{   
    int i=0;
    for(i=0;A[i]!='\0';i++);
    return i;
}

void Display(char A[])
{
    cout<<A<<endl; 
}

void swap(char &a,char &b)
{
    char c=a;
    a=b;
    b=c;
}

// one of the other method is to copying to other array in reverse order
void Rev(char A[])
{  int l=length(A);
    for(int i=0,j=l-1;i<j;i++ ,j--)
    {  
        swap(A[i],A[j]);
    }
}

//conpare string
void comp(char A[],char B[])
{
    int a=length(A);
    int b=length(B);
    int i=0;
    int j=0;
    for(;A[i]!='\0' && B[j]!='\0';i++,j++)
    { 
        if(A[i]!=B[i])
         break;
    }
    if(A[i]>B[i])
     cout<<"greater";
    else if(A[i]<B[i])
     cout<<"smaller";
    else
     cout<<"equal";
    cout<<endl;
}

//Palindrome
// Either whole string is Capital or Small 
// an it doesn't depend upon special character
void Palin(char A[])
{   
    int l=length(A);
    int c=0;
    for(int i=0 ,j=l-1;i<j;i++,j--)
    {
          if(A[i]!=A[j])        
            c=1;
    }
    if(c==0)
     cout<<"It is Palindrome";
    else
     cout<<"It is not Palindrome";
    cout<<endl; 
}

// consider a = A is same likewise all array element 
void Palin2(char A[])
{    
    int l=length(A);
    int s=0;

    char B[l];
    for(int i=0;i<l;i++)
     B[i]=A[i];

    for(int i=0,j=l-1;i<j;i++,j--)
    {       
       if(B[i]!=B[j])
       { 
        if((B[i]>=65 && B[i]<=90) && (B[j]>=97 && B[j]<=122))
        {        
               B[j]-=32;
               if(B[i]!=B[j])
                {
                    s=1;
                    break;
                }
        }     
        else if((B[j]>=65 && B[j]<=90) && (B[i]>=97 && B[i]<=122))
        {        
               B[i]-=32;
               if(B[i]!=B[j])
                {
                    s=1;
                    break;
                }
        } 

       } 
    }
    if(s==0)
     cout<<"It is Palindrome";
    else
     cout<<"It is not Palindrome";
    cout<<endl; 

    
}

//special character not allowed
int  Isstring(char A[])
{
    int c=0;
   for(int i=0;A[i]!='\0';i++)
   {
     if(!(A[i]>=65 && A[i]<=90) && !(A[i]>=97 && A[i]<=122) && !(A[i]>=48 && A[i]<=57))
     { 
        return 0;
     }
   }  
   return 1;

}

int main()
{
    char C[]="Python is here?";
    // Display(C);
    // Rev(C);
    // Display(C);

    char A[]="painter";
    char B[]="Painting";
    // comp(A,B);

    char P[]="TENET";
    char P2[]="TenET";
    // Display(P);
    // Palin(P);
    // Palin2(P);
    // Display(P2);
    // Palin(P2);
    // Palin2(P2); 
    
    cout<<Isstring(P);

    return 0;
}