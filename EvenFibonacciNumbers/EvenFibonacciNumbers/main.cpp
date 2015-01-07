#include <iostream>
using namespace std;

int main() {
    int limit = 4000000;
    int num1 = 0;
    int num2 = 1;
    int currentNum = 0;
    int sum = 0;
    
    while (currentNum <= limit) {
        currentNum = num1 + num2;
        
        num1 = num2;
        num2 = currentNum;
        
        if (currentNum % 2 == 0) {
            sum = sum + currentNum;
        }
        
    }
    cout << sum << endl;
    
    return 0;
}
