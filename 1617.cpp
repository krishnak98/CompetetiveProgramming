#include <iostream>
#include <assert.h>
using namespace std;

long long pow(long long x, long long n, long long mod) {
    if(n == 0) return 1;
    if(n == 1) return x % mod;
    long long res = 1;
    while(n) {
        if(n & 1) {
            res = (res * x) % mod;
        }
        x = (x * x) % mod;
        n >>= 1;
    }
    return res;

}

int main() {
    long long n;
    cin >> n;
    const long long mod = 1e9 + 7;
    cout << pow(2LL,n, mod) << endl;
}