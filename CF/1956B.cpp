#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    freopen("input.txt", "r",stdin);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> m;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            m[a[i]]++;
        }
  
        int ans = 0;
        for(auto i : m) {
            // cout << i.second << " ";
            ans += (i.second - 1);
        }
        cout << ans << endl;
    }
    return 0;
}