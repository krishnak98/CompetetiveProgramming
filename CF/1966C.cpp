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
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        set<int> s;
        for(auto i : a) s.insert(i);
        int val = 1;
        for(auto i : s) {
            if(val != i) {
                break;
            }
            ++val;
        }
        // cout << val << " " <<  a[a.size() - 1] << endl;
        if(val > a[a.size() - 1]) {
            if( a[a.size() - 1] % 2) cout << "Alice\n";
            else cout << "Bob\n";
        } else {
            if(val % 2) cout << "Alice\n";
                else cout << "Bob\n";
        }

    }
    return 0;
}