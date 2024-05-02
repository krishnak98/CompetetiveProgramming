#include "bits/stdc++.h"
using namespace std;
void solve() {
    int n , c;
    cin >> n >> c;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    map<int,int> m;
    for(int i = 0; i < n; ++i) m[a[i]]++;
    long long ans = 0;
    for(auto i : m) {
        if(i.second > c) ans += c;
        else ans += i.second;
    }
    cout << ans << endl;

}
int main() {
    // freopen("input.txt", "r",stdin);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}