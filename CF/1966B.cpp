#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    freopen("input.txt", "r",stdin);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int grid[n][m];
        string x;
        for(int i = 0; i < n; ++i) {
            cin >> x;
            for(int j = 0; j < m; ++j) {
                grid[i][j] = (x[j] == 'W');
            }
        }
        int curr1 = 0, curr2 = 0;
        for(int i = 0; i < n; ++i) {
            curr1 += grid[i][0];
            curr2 += grid[i][m-1];
        }
        int curr3 = 0, curr4 = 0;
        for(int j = 0; j < m; ++j) {
            curr3 += grid[0][j];
            curr4 += grid[n-1][j];
        }
        // cout << n << m << endl;
        // cout << curr1 << " " << curr2 << " " << curr3 << " " << curr4 << endl;
        if((curr1 == 0 && curr2 == n )|| (curr2 == 0 && curr1 == n) || (curr4 == 0 && curr3 == m) || (curr3 == 0 && curr4 == m))
            cout << "No\n";
        else cout << "Yes\n";
    }
    return 0;
}