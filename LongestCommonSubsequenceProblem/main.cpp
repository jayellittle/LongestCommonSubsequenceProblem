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
    
    vector<vector<int>> y(S.size()+1, vector<int>(T.size()+1));
    
    int i, j;
    for (i=0; i<=S.size(); i++) y[i][0] = 0;
    for (j=0; j<=T.size(); j++) y[0][j] = 0;
    
    for (i=1; i<=S.size(); i++) {
        for (j=1; j<=T.size(); j++) {
            if (S[i-1] == T[j-1]) y[i][j] = y[i-1][j-1] + 1;
            else y[i][j] = max(y[i-1][j], y[i][j-1]);
        }
    }
    
    cout << y[S.size()][T.size()] << endl;
}
