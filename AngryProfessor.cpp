#include<iostream>
using namespace std;

int main()
{
    int t;
    cout << "Enter number of test case: ";
    cin >>t;  //number of test cases

    for(int i=0; i<t; i++) //loop for test cases
    {
        int n,k,j,coun=0;
        cout << "Enter number of students and threshold value: ";
        cin >> n >>k; 
        int a[n]; //array of number of students
        cout << "Enter array element: ";
        for(int j=0; j<n; j++)
        {
            cin >> a[j]; //array store
            if(a[j]<=0)  //condition for on time students
            {
                coun++;  //increament by one
            }
        }
        if(coun>=k) //condition(if number of student is greater than or equal to threhold value than print No, otherwise print Yes)
        {
            cout << "No" <<endl;
        }
        else
        {
            cout << "Yes" <<endl;
        }
    }
    return 0;
}