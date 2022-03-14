#include<iostream>
using namespace std;

int main()
{
    //n=the number of hurdles, k=the maximum height the character can jump naturally
    int n=5,k=4, maximum= 0;
    int height[n]={1,6,3,5,2};

    for(int i=0; i<n; i++)
    {
        if(maximum<height[i])
        {
            maximum= height[i]; 
        }
    }
    int doses=maximum-k;
    if(doses<0)
    {
        cout << "0";
    }
    else
    {
        cout << "Doses are: " << doses;
    }

}