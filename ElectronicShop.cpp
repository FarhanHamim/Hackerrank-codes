#include<iostream>
using namespace std;

int main()
{
    //b=budget, n=number of keyboards, m=number of usb driver
    int b=10, n=2, m=3;
    int usb[10]={5,2,8}, keyboards[10]={3,1};
    int result = 0, number=-1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            result= keyboards[i]+usb[j];
            if(result>number && result<=b)
            {
                number=result;
            }
        }
    }
    cout << "Maximum that can spend: " << number << endl;

}