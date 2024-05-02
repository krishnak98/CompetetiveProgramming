#include <iostream>
using namespace std;
int main() {
    int t;
    freopen("input.txt", "r",stdin);
    cin >> t;
    while(t--) {
        int n , k;
        cin >> n >> k;
        if(n == 1) {
            cout << k << endl;
        } else {
            int curr = 1;
            while(curr * 2 <= k) curr *= 2;
            curr--;
            cout << curr << " ";
            cout << k - curr << " " ;
            for(int i = 0; i < n - 2 ; ++i) cout << "0 ";
            cout << endl;
        }
    }
}