#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int ans = 0;
    int i = 0;
    while(i < n) {
        int j = i;
        while(j < n && s[i] == s[j]) ++j;
        ans = max(ans, j - i);
        i = j;
    }
    cout << ans << endl;
    return 0;
}