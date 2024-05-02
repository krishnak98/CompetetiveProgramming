#include <iostream> 
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if(b > a) swap(a, b);
        // a >= b
        if(a > 2 * b) cout << "NO\n";
        else {
            if((a + b) % 3 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}