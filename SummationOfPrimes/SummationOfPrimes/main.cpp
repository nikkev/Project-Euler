#include <iostream>

using namespace std;

int main()
{
    long i, num = 2, sum = 0;
    bool primeFound = true;
    
    for (num = 2; num <= 20000000; num++) {
        primeFound = true;
        for (i = 2; i <= num; i++) {
            if (num % i == 0) {
                primeFound = false;
            }
        }
        if (primeFound) {
            sum += num;
        }
    }
    cout << sum << endl;
    
    return 0;
}