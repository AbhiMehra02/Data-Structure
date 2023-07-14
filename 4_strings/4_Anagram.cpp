/* 
Anagram
1.size of string is same
2. every latter one must be in another and vice versa

ex:- 
  A= "deciaml"
  B= "medical"
*/

#include<iostream>
#include<algorithm>
using namespace std;

int length(char A[])
{   
    int i=0;
    for(i=0;A[i]!='\0';i++);
    return i;
}

void Anagram(char C[],char D[])
{ 
  int c=0;
  if(length(C)==length(D))
    for(int i=0;C[i]!='\0';i++)
    {int l=0;
      for(int j=0;D[j]!='\0';j++)
          if(C[i]==D[j])
           l=1;
     if(l==0)
    {
      c=1;
      break;
    }
      
    } 
  else
   c=1; 

  if(c==1)
   cout<<"not anagram!!";
  else
   cout<<"it is Anagram!!";
  cout<<endl; 

}

void Anagram2(string &S,string &T)
{
  sort(S.begin(),S.end());
  sort(T.begin(),T.end());
  
  int i,a=0;
  for(i=0;S[i]!='\0';i++)
  {
    if(S[i]!=T[i])
     a=1;
  }
  
  if(T[i]!='\0')
   a=1;

  if(a==1)
   cout<<"not anagram!!";
  else
   cout<<"it is Anagram!!";
  cout<<endl;

}
int main()
{
  char C[]="decimal";
  char D[]="medicose";
  string A="decimal";
  string B="decimalp";
  Anagram2(A,B);

   return 0;
}
