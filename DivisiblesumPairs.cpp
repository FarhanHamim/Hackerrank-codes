#include<iostream>
using namespace std;

void divisiblesumPairs(int arr[], int n, int k)
{
    int countofpairs= 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((arr[i]+arr[j])%k==0)
            {
                countofpairs++;
            }
        }
    }
    cout <<endl << "Number of pairs: " << countofpairs << endl;
}

int main()
{
    int n=6, k=3;
    int arr[n]={1,3,2,6,1,2};
    cout<< "Array is: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    divisiblesumPairs(arr, n, k);
}