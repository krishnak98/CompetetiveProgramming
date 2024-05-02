#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a[26];
        vector<char> t;
        for(int i = 0; i < 26; ++i) a[i] = 0;
        int curr = 0;
        for(int i = 0; i < s.length(); ++i) {
            if(a[s[i] - 'a'] == 0) {
                a[s[i]-'a'] = curr + 'a';
                ++curr;
            }
            t.push_back(a[s[i] -'a'] + 'a');
            assert(curr <= 26);
        }
        for(auto i : t) cout << i ;
        cout << endl;
    }
    return 0;
}