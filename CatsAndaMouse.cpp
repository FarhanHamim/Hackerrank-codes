#include<iostream>
using namespace std;

int main()
{
    //q=number of query
    //x= cat a location, y= cat b location, z= mouse c location
    int q=1;
    int x=2,y=5,z=4,a,b;

    for(int i=0; i<q; i++)
    {
        //abs refers absulate value
        //a=distance cat a from mouse c , b= distance cat b from mouse c
        a=abs(z-x);
        b=abs(z-y);

        if(a<b)
        {
            cout << "Cat A" <<endl;
        }
        else if(b<a)
        {
            cout << "Cat B" <<endl;
        }
        else
        {
            cout << "Mouse C" <<endl;
        }

    }
}