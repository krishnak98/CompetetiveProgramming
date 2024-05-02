#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int curr = 5;
    int ans = 0;
    while(curr <= n) {
        ans += n / curr;
        curr *= 5;
    }
    cout << ans << endl;
    return 0;
}