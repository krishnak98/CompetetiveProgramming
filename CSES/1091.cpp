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
    int n, m;
    cin >> n >> m;
    int x;
    multiset<int> ms;
    for(int i = 0; i < n; ++i) {
        cin >> x;
        ms.insert(x);
    }
    
    int t;
    for(int i = 0; i < m; ++i) {
        cin >> t;
        auto it = ms.upper_bound(t);
        if(it == ms.begin()) {
            cout << "-1\n";
        } else {
            cout << *(--it) << endl;
            ms.erase(it);
        }
    }

    return 0;   
}