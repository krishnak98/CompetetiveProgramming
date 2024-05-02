#include <iostream>
#include <set>
#include <assert.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long x = n;
    if((n * (n + 1)) % 4 != 0) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    set<long long> s1;
    long long req_sum = (n * (n + 1)) / 4LL;
    while(req_sum){
        if(req_sum >= n) {
            s1.insert(n);
            req_sum -= n;
            n--;
        } else {
            assert(s1.find(req_sum) == s1.end());
            s1.insert(req_sum);
            req_sum = 0;
        }
    }

    cout << s1.size() << endl;
    long long sum = 0;
    for(auto i : s1) {
        sum += i;
        cout << i << " " ;
    }
    cout << endl;
    cout << x - s1.size() << endl;
    for(long long i = 1; i <= x; ++i) {
        if(s1.find(i) == s1.end()) cout << i << " " ;
    }
    cout << endl;
    return 0;
}
