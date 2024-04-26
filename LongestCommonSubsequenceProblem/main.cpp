//
//  main.cpp
//  LongestCommonSubsequenceProblem
//
//  Created by Woo Sung Jahng on 2024/04/24.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    string S, T;
    S = "axis";
    T = "matrix";
    
    size_t m, n;
    m = S.size();
    n = T.size();
    
    int i, j;
    vector<vector<int>> y;
    for (i=0; i<m; i++) y[i][0] = 1;
    for (j=0; j<n; j++) y[0][j] = 1;
    
    for (i=1; i<m; i++) {
        for (j=1; j<n; j++) {
            if (S[i] == T[j]) y[i][j] = y[i-1][j-1] + 1;
            else 
        }
    }
}
