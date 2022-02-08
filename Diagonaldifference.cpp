#include<iostream>
using namespace std;

int diagonalDifference(int arr[][100], int arraySize)
{
    int leftDiagonalsum= 0;
    int rightDiagonalsum= 0;
    int result;


    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            if (i == j)
            {
                leftDiagonalsum = leftDiagonalsum + arr[i][j];
            }
        }
    }

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            if ((i + j) == (arraySize - 1))
            {
                rightDiagonalsum = rightDiagonalsum + arr[i][j];
            }
        }
    }

    result = leftDiagonalsum - rightDiagonalsum;
    return abs(result);
}

int main()
{
    int arr[100][100];
    int arraySize=3;
 
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            arr[i][j]=rand()%10;
        }
    }

    cout << "Matrix is: " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = 0; j < arraySize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Result is: " << diagonalDifference(arr, arraySize);
}
