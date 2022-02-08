#include<iostream>
using namespace std;

void compareTriplets(int a[], int b[])
{
    int Alice_point=0;
    int Bob_point=0;

    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i])
        {
            Alice_point=Alice_point+1;
        }
        if(a[i]<b[i])
        {
            Bob_point=Bob_point+1;
        }
    }

    cout << Alice_point << " " << Bob_point;

}

int main()
{
    int a[3]={17,28,30}, b[3]={99,16,8};
    
    compareTriplets(a,b);

}
