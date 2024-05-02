#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> x(n);
    for(int i = 0; i < n; ++i) cin >> x[i];
    long long ans = 0;
    for(int i = 0;i < n - 1; ++i) {
        if(x[i+1] < x[i]) {
            ans += abs(x[i+1] - x[i]);
            x[i+1] = x[i];
        }
    }
    cout << ans << endl;
}
