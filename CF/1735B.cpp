#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        int max_size_possible = a[0] * 2 - 1;
        int ans = 0;
        for(int i = 0; i < n; ++i) {
            if(a[i] > max_size_possible)
                ans += (a[i] / max_size_possible) - (a[i] % max_size_possible == 0);
        }
        cout << ans << endl;

    }
    return 0;
}