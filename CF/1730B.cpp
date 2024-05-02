#include "bits/stdc++.h"
using namespace std;
void solve() {
    int n;
    cin >> n;
    long long x[n], t[n];
    for(int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    for(int i = 0; i < n; ++i) {
        cin >> t[i];
    }
    vector<long long> v;
    for(int i = 0; i < n; ++i) {
        v.push_back(x[i] - t[i]);
        v.push_back(x[i] + t[i]);
    }
    sort(v.begin() , v.end());
    double ans = v[0] + v[v.size() - 1];
    ans /= 2.0;
    printf("%.6f\n", ans);    

}
int main() {
    freopen("input.txt", "r",stdin);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}