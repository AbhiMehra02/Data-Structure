#include<iostream>
using namespace std;

int main()
{
    // fully stack
    int A[5][4];

    // partiallly stack partially heap
    int *B[3];
    for (int i=0;i<3;i++)
    {
        B[i]=new int [i+1];
    }

    // fully heap
    int **C;
    C =new int * [5];
    for (int i=0;i<3;i++)
    {
        C[i]=new int [i+1];
    }
    return 0;
}