#include <iostream>
#include <fstream>

using namespace std;

int charToInt (char ch){
    int num = 0;
    switch (ch) {
        case '0':
            num = 0;
            break;
        case '1':
            num = 1;
            break;
        case '2':
            num = 2;
            break;
        case '3':
            num = 3;
            break;
        case '4':
            num = 4;
            break;
        case '5':
            num = 5;
            break;
        case '6':
            num = 6;
            break;
        case '7':
            num = 7;
            break;
        case '8':
            num = 8;
            break;
        case '9':
            num = 9;
            break;
        default:
            break;
    }
    return num;
}
int main(){
    ifstream sequence("sequence.txt");
    long num = 0, largestProduct = 0, product = 0, position = 0;
    char ch;
    
    for (int y = 1; y <= 1000; y++){
        sequence >> ch;
        num = charToInt(ch);
        product = num;
        for (int z = 1; z < 13; z++) {
            sequence >> ch;
            num = charToInt(ch);
            product *= num;
        }
        if (product > largestProduct) {
            largestProduct = product;
        }
        position++;
        sequence.seekg(position);
    }
    cout << largestProduct << endl;
    
    sequence.close();
    
    return 0;
}