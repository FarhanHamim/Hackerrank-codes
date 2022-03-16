#include<iostream>
using namespace std;

int main()
{
    int height =-1;
    int heights[26]={1,3,1,3,1,4,1,3,2,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,7};
    string str="zaba";
    //length of the string
    int l = str.length();
    for(int i = 0; i < l; i++)
    {
        if(heights[str[i]-97] > height) //97= ASCII value of small a, to find out index value of height
        {
            height = heights[str[i]-97];
        }
    }
    //the size of the highlighted area
    int Highlighedarea=l*height;
    
    cout << "The size of the highlighted area: " << Highlighedarea << endl;

}