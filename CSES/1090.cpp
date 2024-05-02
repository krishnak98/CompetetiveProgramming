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
    int n, x;
    cin >> n >> x;
    vector<int> p;
    int y;
    for(int i = 0; i < n; ++i) {
        cin >> y;
        if(y <= x) p.push_back(y);
    }
    sort(p.begin(), p.end());
    int j = p.size() - 1;
    int i = 0;
    int ans = 0;
    while(true) {
        if(p[i] + p[j] <= x) {
            ans++;
            ++i;
            --j;
        } else {
            ans++;
            --j;
        }
        if(i == j) {
            ++ans;
            break;
        } 
        if(i > j) break;
    }
    cout << ans << endl;
    return 0;   
}