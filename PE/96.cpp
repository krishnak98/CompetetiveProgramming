#include <iostream>
#include <assert.h>
using namespace std;

bool is_possible(int (&grid)[9][9], int row, int col, int val) {
    for(int i = 0; i < 9; ++i) {
        if(grid[row][i] == val) {
            return false;
        }
        if(grid[i][col] == val) {
            return false;
        }
    }
    int rrow = row - row % 3;
    int ccol = col - col % 3;
    for(int i = rrow; i < rrow + 3; ++i) {
        for(int j = ccol; j < ccol + 3; ++j) {
            if(grid[i][j] == val) {
                return false;
            }
        }
    }
    return true;
}

bool solve(int (&grid)[9][9], int row, int col) {
    if(row == 8 && col == 9) return 1;
    if(col == 9) {
        col = 0;
        row++;
    }

    if(grid[row][col] != 0) {
        return solve(grid, row, col + 1);
    }

    for(int i = 1; i <= 9; ++i) {
        if(is_possible(grid, row, col, i)) {
            grid[row][col] = i;
            if(solve(grid, row, col + 1)) {
                return true;
            }
        }  
        grid[row][col] = 0;
    }
    return false;
}

int main() {
    int t = 50;
    int ans = 0;
    int chk = 0;
    while(t--) {
        string _, grid_id;
        cin >> _ >> grid_id;
        vector<string> vs(9);
        for(int i = 0; i < 9; ++i) {
            cin >> vs[i];
        }

        int grid[9][9];
        for(int i = 0; i < 9; ++i) {
            for(int j = 0; j < 9; ++j) {
                grid[i][j] = vs[i][j] -'0';
                // cout << grid[i][j] << " ";
            }
            // cout << endl;
        }
        bool solved = solve(grid, 0, 0);
        
        if(solved) {
            ++chk;
            int curr = (grid[0][0] * 100 + grid[0][1] * 10 + grid[0][2]);
            ans += curr;
            // for(int i = 0 ; i < 9; ++i) {
            //     for(int j = 0; j < 9; ++j) {
            //         cout << grid[i][j] << " " ;
            //     }
            //     cout << endl;
            // }
        } else {
            for(int i = 0; i < 9; ++i) {
            for(int j = 0; j < 9; ++j) {
               cout << grid[i][j] << " "; 
            }
            cout << endl;
            }
        }
    }
    cout << ans << endl;
    cout << chk << endl;
}