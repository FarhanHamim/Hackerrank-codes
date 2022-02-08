#include<iostream>
using namespace std;

int birthdayCakeCandles(int n, int array[])
{
    int maximum = array[0];
    int count = 0;

    for(int i=0;i<n; i++) {
        if(array[i] > maximum) {
            maximum = array[i];
        }        
    }
    for (int i=0;i<n;i++) {
        if(array[i]==maximum) {
            count++;
        }            
    }
    return count;
}

int main()
{
    int n=5;
    int array[n]={5,4,5,3,5};

    cout << "Tallest candles: " << birthdayCakeCandles(n,array);
}