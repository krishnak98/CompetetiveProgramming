#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    freopen("input.txt", "r",stdin);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        map<int,int> m;
        for(auto i : a) {
            m[i]++;
        }
        vector<int> vs;
        for(auto i: m) vs.push_back(i.second);
        sort(vs.begin(), vs.end(), [](const int& a, const int& b){return a > b; });
        int ans = 0;
        int rem = 0;
        for(auto i : vs) {
            if(i > k) {
                rem = (k - 1);
            } else {
                // cout << i << " " << rem << endl;
                if(i + rem >= k) {
                    rem = (k - 1);
                } else {
                    ans += i;
                }
            }
            
        }
        // cout << rem << endl;
        ans += (rem / k) + (rem % k);
        cout << ans << endl;
    }
    return 0;
}