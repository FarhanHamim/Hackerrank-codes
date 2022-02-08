#include<iostream>
#include<iomanip>
using namespace std;

void plusMinus(int n, int array[])
{
    float positive=0;
    float negative=0;
    float zero=0;

    for(int i=0; i<n; i++)
    {
        if(array[i]>0)
        {
            positive++;
        }
        if(array[i]<0)
        {
           negative++;
        }
        if(array[i]==0)
        {
           zero++;
        }
    }

    cout << setprecision(6) << fixed << "Proportion of positive values: " << positive/n <<endl;
    cout << setprecision(6) << fixed << "Proportion of negative values: " << negative/n <<endl;
    cout << setprecision(6) << fixed << "Proportion of zeros: " << zero/n <<endl;
}

int main()
{
    int n=6;
    int array[n]={-4, 3, -9, 0, 4, 1};
   
    plusMinus(n,array);
}