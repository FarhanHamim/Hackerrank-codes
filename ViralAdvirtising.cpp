#include<iostream>
using namespace std;
int main()
{
    int day=3, shared=5,like, Totallikes=0;

    for(int i=0;i<day;i++){
        like=shared/2;
        Totallikes=Totallikes+like;
        shared=like*3;
    }
    cout<< "The cumulative likes at that day: " << Totallikes<<endl;
}