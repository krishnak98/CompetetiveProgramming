#include <iostream> 
#include <sstream> 
#include <cstdio> 
#include <cmath> 
#include <cstring> 
#include <cctype> 
#include <string> 
#include <vector> 
#include <list> 
#include <set> 
#include <map> 
#include <queue> 
#include <stack> 
#include <algorithm> 
#include <functional> 
using namespace std;  
 

int main() {
    int n, m , k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < m; ++i) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;
    int i = 0 , j = 0;
    while(i < n && j < m) {
        if(abs(a[i] - b[j]) <= k) {
            ++i;
            ++j;
            ++ans;
        }
        else if(a[i] < b[j]) {
            ++i;
        } else {
            ++j;
        }
    }
    cout << ans << endl;
    
    return 0;   
}