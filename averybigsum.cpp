#include<iostream>
using namespace std;

long long int aVeryBigSum(int n, long long int array[])
{
    long long int sum =0;
    for(int i = 0; i < n; i++)
    {
        sum=sum + array[i];
    }
    return sum;
}

int main()
{
    int n=5;
    long long int array[n]={1000000001,1000000002,1000000003,1000000004,1000000005};
    cout << "Sum of the elements: " << aVeryBigSum(n,array);
}
