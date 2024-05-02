#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x, y;
        cin >> x >> y;
        if(x >= y) {
            if(x & 1) {
                // 5 , 2 = 18
                cout << (x - 1) * (x - 1) + y << endl;
            } else {
                // 4 , 2 = 15 
                cout << x * x - y + 1 << endl;
            }
        } else {
            if(y & 1) {
                // 1 3 =  9
                cout << y * y - x + 1 << endl;
            } else {
                // 1 4 = 10
                cout << (y - 1) * (y - 1) + x << endl;
            }
        }
    }
}