#include <iostream>

using namespace std;

int main()
{
    unsigned long num = 2, prime = 0, numPrimes = 0;
    bool primeFound = true;
    
    while (numPrimes < 10001) {
        primeFound = true;
        for (int i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                primeFound = false;
            }
        }
        if (primeFound) {
            prime = num;
            numPrimes++;
        }
        num++;
    }
    cout << prime << endl;
    
    return 0;
}