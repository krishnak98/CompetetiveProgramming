#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<long long> a(n - 1);
    for(int i = 0; i < n - 1; ++i) cin >> a[i];
    // cout << (n*(n+1))/2 << endl;
    cout << (n*(n+1))/2 - accumulate(a.begin(), a.end(), 0LL) << endl;
    return 0;
}