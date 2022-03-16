#include<iostream>
using namespace std;
long int rev(long int a)
{
    int n=0;  //store reverse

    while(a!=0)  //till orginal number not equal to zero
    {
        n=n*10+a%10;  //n= multiplying n value with 10 then add (orginal value % with 10)
        a=a/10;  // dividing a value by 10
    }
    return n;  //returning n value
}
int main()
{
    long int i, j, k, coun=0;
    cin >> i >> j >> k;

    for(i; i<=j; i++)
    {
        long int x;
        x=rev(i)-i; //storing substraction of reverse value and orginal value

        if(x%k==0)
        {
            coun++;
        }
    }
    cout <<coun;
}