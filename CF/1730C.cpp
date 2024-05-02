#include "bits/stdc++.h"
using namespace std;
void solve() {
    string s;
   cin >> s;
   int n = s.size();
   vector<int> ans;
   int min_till_now = 10;
   for(int i = n - 1; i >= 0; --i) {
        if(s[i] - '0' <= min_till_now) {

            ans.push_back(s[i] - '0');
        }
        else {
            ans.push_back(min(9, s[i] - '0' + 1));
        }
        min_till_now = min(min_till_now,s[i] - '0');
   }
   sort(ans.begin() , ans.end());
   for(auto i : ans) cout << i;
   cout << endl;
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