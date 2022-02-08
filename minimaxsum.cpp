#include<iostream>
using namespace std;

void miniMaxSum(long long int array[5])
{
    long long int minimum, maximum=0, sum=0;

    for(int i=0;i<5;i++)
    {
        sum=sum + array[i];
    }

    for(int i=0;i<5;i++)
    {
        if(array[i]>maximum)
        {
            maximum=array[i];
        }
    }
    minimum=array[0];
    for(int i=0;i<5;i++)
    {
        if(array[i]<minimum)
        {
            minimum=array[i];
        }
    }
    long long int Maximum=sum-maximum;
    long long int Minimum=sum-minimum;

    cout << "Maximum: " << Maximum << " " << "Minimum: "<< Minimum << endl;
}
int main()
{

    long long int array[5]={1,2,3,4,5};

    miniMaxSum(array);

}