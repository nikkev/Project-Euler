#include <iostream>

using namespace std;

bool isPalindrome(int n){
    bool p = false;
    int i = 0, r = 0, s = 0;
    for (i = n; n!= 0; n /= 10) {
        r = n % 10;
        s = s * 10 + r;
    }
    if (i == s) {
        p = true;
    }
    return p;
}

int main(){
    int h = 0, n, a, b;
    bool p = false;
    for (int y = 1; y <= 999; y++) {
        for (int z = 1; z <= 999; z++) {
            n = y * z;
            p = isPalindrome(n);
            if (p && n > h) {
                h = n;
                a = y;
                b = z;
            }
        }
    }
    cout << h << endl;
    cout << a << endl;
    cout << b << endl;
    return 0;
}

