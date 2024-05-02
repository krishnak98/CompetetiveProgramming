#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& v, int n) {
    for(int x : v) {
        // cout << x << endl;
        for(int i = n ; i > 0; i--) {
            int curr = (1 << (i - 1));
            if(x & curr) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    if(n == 1) {
        print(v, 1);
        return 0;
    } else {
        // cout << "HERE\n";
        int x = 1;
        while(x < n) {
            vector<int> v2;
            for(auto i = v.rbegin(); i != v.rend(); i += 1) {
                // cout << *i << " " << (*i | (1 << x)) << endl;
                v2.push_back(*i | (1 << x));
            }
            v.insert(v.end(), v2.begin(), v2.end());
            ++x;
        }
        // for(auto i : v) {
        //     cout << i << " " ;
        // }
        // cout << endl;
        print(v, n);
    }


    return 0;
}