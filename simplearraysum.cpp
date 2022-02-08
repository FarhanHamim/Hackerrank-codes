#include<iostream>
using namespace std;

int simpleArraySum(int array_Size, int array[])
{
    int summation=0, i;
    for(i=0; i<array_Size; i++)
    {
        summation=summation + array[i];
    }
    return summation;
}

int main()
{
    int array_Size=6, i;
    int array[array_Size]={1,2,3,4,10,11};

    cout<< "Sum of array: " << simpleArraySum(array_Size, array);
}
