#include<iostream>
using namespace std;

int main()
{
    int n=5, sum=0, countdivide=0;
    int chocolate[n]={1,2,1,3,2};
    int m=2,d=3; 
    
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=0; j<m; j++)
        {
            sum=sum+chocolate[i+j];
        }
        if(sum==d)
        {
            countdivide++;
        }
    }
    cout << countdivide;

}