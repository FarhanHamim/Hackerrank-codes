#include<iostream>
using namespace std;

int main()
{
    int n=11;  //array size

    int a[n]={1,2,3,4,5,4,3,2,1,3,4};   //initializing array

    int i=1;   //type-1 bird
    int c1=0;   // type-1 counter
    for(int j=0; j<n; j++)
    {
        if(i==a[j])
        {
            c1++;     //type-1 comparing and incremanting
        }
    }
    i++;   //type-2 bird
    int c2=0;   // type-2 counter
    for(int j=0; j<n; j++)
    {
        if(i==a[j])
        {
            c2++;     //type-2comparing and incremanting
        }
    }
    i++;   //type-3 bird
    int c3=0;   // type-3 counter
    for(int j=0; j<n; j++)
    {
        if(i==a[j])
        {
            c3++;     //type-3 comparing and incremanting
        }
    }
    i++;   //type-4 bird
    int c4=0;   // type-4 counter
    for(int j=0; j<n; j++)
    {
        if(i==a[j])
        {
            c4++;     //type-4 comparing and incremanting
        }
    }
    i++;   //type-5 bird
    int c5=0;   // type-5 counter
    for(int j=0; j<n; j++)
    {
        if(i==a[j])
        {
            c5++;     //type-5 comparing and incremanting
        }
    }

    //condition to printing type
    if(c1>=c2 && c1>=c3 && c1>=c4 && c1>=c5)
    {
        cout << "1";
    }
    else if(c2>=c3 && c2>=c4 && c2>=c5)
    {
        cout << "2";
    }
    else if(c3>=c4 && c3>=c5)
    {
        cout << "3";
    }
    else if(c4>=c5)
    {
        cout << "4";
    }
    else
    {
        cout << "5";
    }
}