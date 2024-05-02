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
        int k, q;
        cin >> k >> q;
        vector<int> a(k);
        vector<int> n(q);
        for(int i = 0; i < k; ++i) cin >> a[i];
        for(int i = 0; i < q; ++i) cin >> n[i];
        for(int i = 0; i < q; ++i) {
            if(n[i] >= a[0]) cout << a[0] - 1 << " ";
            else cout << n[i] << " " ;
        }
        cout << endl;
    }
    return 0;
}