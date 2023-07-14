#include<iostream>
using namespace std;
//assuming that a & A are not same 
void  Palindrome(char A[],int n)
{
    int k=0;
     for(int i=0,j=n-1;i<j;i++,j--)
     { 
        if(A[i]!=A[j])
          { 
             k=1;
             break;
          }     
     }


     if(k==1)
      cout<<" not palindrome";
     else 
      cout<<" palindrome";

    cout<<endl;
}


//A & a are equal;
void  Palindrome_2(char A[],int n)
{
    int k=0;
     for(int i=0,j=n-1;i<j;i++,j--)
     {
        int a=A[i] ,b=A[j];
          if(((a>=65 && a<=90) || (a>=97 && a<=122)) && ((b>=65 && b<=90)||(b>=97 && b<=122)))
          { 
            if(((a>=65 && a<=90) && (b>=65 && b<=90)) || ((a>=97 && a<=122) && (b>=97 && b<=122)))
            {
                if(A[i]!=A[j])
                  k=1;
                  break;
            }
            if((a>=65 && a<=90) && (b>=97 && b<=122))
            {
                if(a!=(b-32))
                 k=1;
                 break;
            }
            if((b>=65 && b<=90) && (a>=97 && a<=122))
            {
                if(a!=(b+32))
                 k=1;
                 break;
            }
          }
          else if(A[i]!=A[j])
          {
            k=1;
            break;
          }

             
     }
     if(k==0)
      cout<<"palindrome";
     else
      cout<<"not palindrome";

    cout<<endl;
}

int main()
{
     int n;
   cin>>n;

   char Arr[n];

   for(int i=0;i<n;i++)
    cin>>Arr[i];

  Palindrome_2(Arr,n);
    return 0;
}