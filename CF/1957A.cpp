#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
int main() {
    freopen("input.txt", "r",stdin);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        map<int,int> m;
        for(auto i : a) m[i]++;
        int ans = 0;
        for(auto i : m) ans += (i.second) / 3;
        cout << ans << endl;
    }
}