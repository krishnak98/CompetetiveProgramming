#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n ;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        int xor_sum = 0;
        vector<int> pref_sum(n+1, 0);

        for(int i = 0; i < n; ++i) {
            pref_sum[i+1] = pref_sum[i] ^ x[i];
        }
        // f(x,y) = pref[y+1] - pref[x]

        int ans = 0;


        for(int i = 0; i < n; ++i) {
            for(int x = 0; x < i; ++x) {
                for(int y = i; y < n; ++y) {
                    
                }
            }
        }


    }
    return 0;
}