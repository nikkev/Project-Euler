#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int sum = 0;
    
    cout << "Please input a number." << endl;
    cin >> num;
    
    for(int i = 1; i < num; i++){
        if (i % 3 == 0 || i % 5 == 0) {
            sum = sum + i;
        }
        
    }
    cout << sum << endl;
    return 0;
}