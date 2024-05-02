#include <iostream>
using namespace std;
int main() {
    long long int n ;
    cin >> n;
    for(long long int i = 1; i <= n; ++i) {
        cout << (i*i * (i * i - 1)) / 2 - 4 * (i - 1) * (i - 2) << endl;
    }
    return 0;
}
