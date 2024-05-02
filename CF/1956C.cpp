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
        int n;
        cin >> n;
        int grid[n][n];
        int val = 0;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                grid[i][j] = max(i, j) + 1;
                val += grid[i][j];
            }
        }   
        cout << val << " " << 2*n << endl;
        for(int i = 0; i < n ; ++i) {
            cout << "1 " << n - i << " " ;
            for(int j = 0; j < n; ++j) {
                cout << j + 1<< " " ;
            }
            cout << endl;
            cout << "2 " << n - i << " " ;
            for(int j = 0; j < n; ++j) {
                cout << j + 1<< " " ;
            }
            cout << endl;
        }
        
    }
    return 0;
}