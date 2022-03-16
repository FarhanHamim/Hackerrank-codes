#include<iostream>
using namespace std;

int main()
{
    int a=2, b=3; //initialization
    int x[100]={2,4};  //array declaration with value
    int y[100]={16,32,96};
    
    int integercount = 0;
    for (int k=1; k<=100; k++)
    {
        int flag = 1;
        for (int i=0; i<a; i++)
        {
            if (k % x[i]!=0)  //checking elements(if kth value divisible by the value of x[i] and answer not equal to 0 then flag it as 0)
            {
                flag = 0; 
            }
        }
        for (int i=0; i<b; i++)
        {
             if (y[i] % k!=0)   //checking elements(if y[i] divisible by k value and result not equal to 0 then flag it as 0)
             {
                flag = 0; 
             }
        }
        if (flag == 1)
            integercount ++;  //if flag value in becomes 1 then increment integercounter 
    }
    cout << "The number of integers that are between the sets: " << integercount << endl;  
    return 0;
}