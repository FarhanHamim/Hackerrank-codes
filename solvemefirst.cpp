#include <iostream>
using namespace std;

int solveMeFirst(int a, int b)
{
  return a+b;
}

int main() {
  int num1=5, num2=6;
  int sum;
  sum = solveMeFirst(num1,num2);
  cout<<"Sum is: "<< sum;
  return 0;
}