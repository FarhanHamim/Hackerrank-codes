#include<iostream>
using namespace std;

int main()
{
    int n=8;

    char c[n]={'U','D','D','D','U','D','U','U'};
    int s=0;  //to check sea level
    int v=0; //to count valley 

    for(int i=0; i<n; i++)
    {
        if(s<0)    //to check below sea level
        {
            if(c[i]=='U')  //if uphill, increment s by 1
            {
                s++;
            }
            else
            {
                s--;   //if downhill, decrement s by 1
            }

            if(s==0)
            {
                v++;   //when sea level reached, increment vallet count by 1
            }
        }
        else   //to check above sea level
        {
            if(c[i]=='U')
            {
                s++;    //if uphill, increment s by 1
            }
            else
            {
                s--;    //if downhill, decrement s by 1
            }
        }
    }

    cout << "The number of valleys traversed: " << v;

}