#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end(), [](const pair<int,int>& x, const pair<int,int>& y){
        return x.second < y.second;
    });
    // for(int i = 0; i < n; ++i) cout << a[i].first << " " << a[i].second << endl;
    int prev = - 1;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i].first >= prev) {
            ++ans;
            prev = a[i].second;
        }
    }
    cout << ans << endl;
    return 0; 
}