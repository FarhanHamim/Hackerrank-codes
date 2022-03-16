#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of test cases: ";
    cin >> n;  //number of test cases

    for(int i = 0; i < n; i++)
    {
        int a=1; // initializing height as 1

        int x;
        cin >> x;  //number of cycles periodic test

        if(x==0)
        {
            cout << a << endl;  // if value of x is 0, printing 0th cycle
        }
        else
        {
            for(int j=1; j<=x; j++)
            {
                if(j%2==0)
                {
                    a=a+1;   //for even period increment value of a by 1 (summer cycle)
                }
                else
                {
                    a=a*2;  //for odd period increment value of a by multiplying with 2 (spring cycle)
                }
            }
            cout << a <<endl;
        }

    }
}