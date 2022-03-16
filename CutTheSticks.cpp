#include<iostream>
using namespace std;

int main()
{
    int n=6,c; //size of array
    int a[1002]={0}; //intializing array 

    for(int i=0;i<n;i++)
    {
        cin >>c;   //taking integers as input
        a[c]++;
    }
    int m=n; //initializing m as n

    for(int i=0;i<1001;i++)
    {
        if(a[i]>0)  //if arrays elements greater than 0 then print value of m and store value in m(subtract value of a[i] from m)
        {
            cout << m <<endl;
            m=m-a[i];
        }
    }
}