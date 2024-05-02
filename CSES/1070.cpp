#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a;
    if(n == 1) {
        cout << "1\n";
        return 0;
    }
    if(n <= 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    int curr = 2;
    while(curr <= n) {
        a.push_back(curr);
        curr += 2;
    }
    curr = 1;
    while(curr <= n) {
        a.push_back(curr);
        curr += 2;
    }
    for(auto i : a) {
        cout << i << " " ;
    }
    cout << endl;
    return 0;
}