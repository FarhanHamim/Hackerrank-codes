#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number of elements in the sequence: ";
    cin >> n;   //number of elements in the sequence
    int p[n+1];
    for(int i=1; i<=n; i++){
        int k;
        cin >> k;  
        p[k]=i;  //storing integer values
    }

    for(int i=1;i<=n;i++)
    {
        cout << p[p[i]] << endl;
    }
    return 0;
}