#include<iostream>
using namespace std;

void breakingRecords(int n, int arr[])
{
    int minimum, maximum, Maximumcounter=0, Minimumcounter=0;

    minimum = arr[0];
    maximum = arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>maximum)
        {
            maximum = arr[i];
            Maximumcounter++;
        }
        if(arr[i]<minimum)
        {
            minimum = arr[i];
            Minimumcounter++;
        }
    }
    cout << Maximumcounter << " " << Minimumcounter;
}

int main()
{
    int n=10;
    int arr[n]={3,4,21,36,10,28,35,5,24,42};
    
    breakingRecords(n,arr);
}