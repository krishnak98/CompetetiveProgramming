#include <iostream>
#include <map>
#include <algorithm>

using namespace std;
int main() {
    string s;
    cin >> s;
    map<char, int> m;
    int n = s.size();
    for(int i = 0; i < n; ++i) m[s[i]]++;
    int odds = 0;
    for(auto i : m) {
        if(i.second % 2 == 1) ++odds;
    }
    if(odds > 1) cout << "NO SOLUTION\n";
    else {
        string ans = "";
        string odd_char = "";
        for(auto i : m) {
            if(i.second % 2 == 0) {
                for(int j = 0; j < i.second; j += 2) 
                    ans += i.first;
            } else {
                for(int j = 0; j < i.second; j ++) 
                    odd_char += i.first;
            }
        }
        cout << ans + odd_char;
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}