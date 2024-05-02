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
        int n , k;
        cin >> n >> k;
        int x = 31 - __builtin_clz(k);
        vector<int> v;
        for(int i = 0; i < x; ++i) {
            v.push_back((1 << i));
        }
        if(k & (k - 1))
            v.push_back(k - (1 << x));
        v.push_back(k+1);
        v.push_back(k+1+(1<<x));

        for(int i = x + 1;v.size() < 25 ; ++i) {
            v.push_back((1 << i));
        }
        cout << v.size() << endl;
        for(auto i : v) cout << i << " ";
        cout << endl;
    }
    return 0;
}