#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <utility>
using namespace std;
void generate_permutations(string x, int l, set<string>& ss) {
    if(l == (int)x.size() - 1) {
        ss.insert(x);
        return;
    }
    for(int i = l; i < (int)x.size(); ++i) {
        swap(x[l], x[i]);
        generate_permutations(x, l + 1, ss);
        swap(x[l] , x[i]);
    }
}

int main() {
    string s;
    cin >> s;
    // vector<string> ans =  generate_permutations( s, 0);
    set<string> ans;
    generate_permutations( s, 0, ans);
    // for(auto i : ans) ssans.insert(i);
    cout << ans.size() << endl;
    for(auto ss : ans) cout << ss << endl;
    return 0;
}