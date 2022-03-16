#include<iostream>
using namespace std;

int main()
{
    int n=07;
    string s=":05:45PM"; //n for hour, s for rest input

    //at 6th position AM/PM present

    if(s[6]=='P')
    {                   //for PM
        if(n==12)
        {
            cout << n;
        }
        else
        {
            n=n+12; //converting into 24 hour
            cout << n; 
        }
    }
    else
    {                   //for AM
        if(n==12)
        {
            cout << "00";
        }
        else
        {
            cout << "0" << n;
        }

    }

    s.erase(6); //to remove AM/PM for 24 hour format
    cout << s;


}