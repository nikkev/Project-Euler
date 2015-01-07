#include <iostream>
using namespace std;

int main()
{
    unsigned long num = 600851475143;
    unsigned long factor = 0;
    unsigned long primeFactor = 0;
    unsigned long midPoint = num / 2;
    unsigned long midFactor = 0;
    
    for(int i = 1; i < midPoint; i++){ //obtaining each number from 1 to less than num
        
        if (num % i == 0 && primeFactor < i) { //check if i is a factor of num
            
            factor = i; //sets factor to be i
            midFactor = factor / 2;
            bool isPrime = true;
            
            for (int y = 2; y < midFactor; y++) { //checks each number from 2 to less than factor (i)
                if(factor % y == 0) // checks if factor has any factors
                    isPrime = false; // if a factor is found isPrime is set to be false
            }
            if (isPrime != false) {
                primeFactor = factor;
            }
        }
    }
    cout << primeFactor << endl;
    
    return 0;
}