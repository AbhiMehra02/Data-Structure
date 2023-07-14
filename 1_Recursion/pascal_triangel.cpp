/*        Pascal Triangle
                    1
                 1     1
              1     2     1
          1      3     3     1
      1       4     6     4     1

      n-1    n-1    n
       C   +   C  =  C
        r-1      r    r

*/             

#include<iostream>
using namespace std;

int pascal(int n,int r)
{
  
  if(n>=r)
  { 
  if(n==r || n==(n-r))
       return 1;

  return pascal(n-1,r-1)+pascal(n-1,r);
  }
  return -1;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<pascal(n,r);
 
    return 0;
}