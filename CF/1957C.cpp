#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int t;
    freopen("input.txt", "r",stdin);
    cin >> t;
    while(t--) {
        int n , k;
        cin >> n >> k;
        // vector<pair<int,int>> coor(k);
        set<int> occ;
        int x,y;
        for(int i = 0; i < k; ++i) {
            cin >> x >> y;
            occ.insert(x);
            occ.insert(y);
            //  cin >> coor[k].first >> coor[k].second;
        }
        int rem = n - occ.size();
        if(rem <= 0) cout << "1\n";
        else if(rem == 1) cout << "1\n";
        else if(rem == 2) cout << "3\n";
        else {
            int mod = 1e9 + 7;
            vector<long long> dp(rem + 1, 0);
            dp[0] = 0;
            dp[1] = 1;
            dp[2] = 3;
            for(int i = 3; i <= n - occ.size(); ++i) {
                dp[i] = dp[i-1] + 2 * (i - 1) * dp[i-2];
                dp[i] %= mod;
            }
            cout << dp[n - occ.size()] << endl;
        }
    }
    
}