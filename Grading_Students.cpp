#include<iostream>
using namespace std;

int main()
{
    int grades[4]={73,67,38,33};
    
    cout << "Grades before round: " <<endl;
    for(int i=0; i<4; i++)
    {
        cout <<grades[i] <<endl;
    }
    for(int i=0; i<4; i++)
    {
        int rem;

        if(grades[i]>=38)
        {
            rem=grades[i]%5;
            if(rem>=3)
            {
                grades[i]=grades[i]-rem+5;
            }
        }
    }

    cout << "Grades after round: " <<endl;
    for(int i=0; i<4; i++)
    {
        cout <<grades[i] <<endl;
    }
}