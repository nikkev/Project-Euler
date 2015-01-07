#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int num = 1;
    bool foundMultiple = false;
    
    while (foundMultiple == false) {
        
        bool isMultiple= true;
        
        for (i = 1; i <= 10; i++) {
            if (num % i != 0) {
                isMultiple = false;
            }
        }
        
        if (isMultiple != false) {
            cout << num << endl;
            foundMultiple = true;
        }
        
        num++;
        
    }
    
    return 0;
}