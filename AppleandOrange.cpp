#include<iostream>
using namespace std;

int main()
{
    int startpoint=7, endpoint=11;
    int a=5, b=15;
    int m=3, n=2;
    int applecoun=0,orangecoun=0;
    
    int ap[m]={-2,2,1};
    int oran[n]={5,-6};

    for(int i=0; i<m; i++)
    {
        if(((a+ap[i])>=startpoint) && ((a+ap[i])<=endpoint))
        {
            applecoun++;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(((b+oran[i])>=startpoint) && ((b+oran[i])<=endpoint))
        {
            orangecoun++;
        }
    }

    cout << applecoun <<endl;
    cout << orangecoun;
}