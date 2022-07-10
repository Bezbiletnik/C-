#include <iostream>
using namespace std;

bool f(int n, int len){
    int nRemainder, d = 1;
    while(len != 0){
        nRemainder = (n / d) % 10;
        if(nRemainder == 2){
            return 1;
        }
        d *= 10;
        len -= 1;
    }
    return 0;
}

int main() {
    int n = 0;
    cin >> n;
    int len = std::to_string(n).length();
    cout << f(n, len);
    
    return 0;
}

