#include<iostream>
using namespace std;

int main()
{
    //k=an integer representing the zero-based index of the item Anna doesn't eat
    //b=the amount of money that Anna contributed to the bill
    int n=4, k=1, actualAmmount, chargedAmmount=0;
    int bill[n]={3,10,2,9};
    for(int i=0; i<n; i++)
    {
        chargedAmmount=chargedAmmount+bill[i];
    }
    int b=12;
    actualAmmount=chargedAmmount-bill[k];
    actualAmmount=actualAmmount/2;

    if(b==actualAmmount)
    {
        cout << "Bon Appetit";
    }
    else
    {
        cout << b-actualAmmount << " " << "Brian overcharged Anna";
    }

}