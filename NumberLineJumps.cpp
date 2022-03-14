#include<iostream>
using namespace std;

string kangarooJumps(int x1, int x2, int v1, int v2)
{
    if(v2 >= v1)
    {
        return "NO";
    }
    else if((x2-x1)%(v1-v2) == 0)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main(){
    int x1=0;
    int v1=2;
    int x2=5;
    int v2=3;
    string result=kangarooJumps(x1,x2,v1,v2);
    cout << result << endl;
}