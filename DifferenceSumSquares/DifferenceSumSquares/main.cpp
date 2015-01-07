#include <iostream>
using namespace std;

int main()
{
    int sumSquares = 0;
    int squareSum = 0;
    int difSquares = 0;
    
    for (int i = 1; i <= 100; i++) {
        sumSquares += (i * i);
        squareSum += i;
    }
    squareSum *= squareSum;
    difSquares = squareSum - sumSquares;
    
    cout << sumSquares << endl;
    cout << squareSum << endl;
    cout << difSquares << endl;
    
    return 0;
}