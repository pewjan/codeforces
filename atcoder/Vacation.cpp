#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
// #include "../rin.h"
#define ll long long int

// array<array<int, 4>, 100000> memo = []{
//         array<array<int, 4>, 100000> temp;
//         array<int, 4> x;
//         x.fill(-1);
//         temp.fill(x);
//         return temp;
//     }();
// ll dp(int r, int c, vector<vector<int>> & arr){
//     if(r >= arr.size()){
//         return 0;
//     }
//     if(memo[r][c+1] != -1){
//         return memo[r][c+1];
//     }
//     ll count = 0;
//     for(int i = 0; i < 3; i++){
//         if(i != c){
//             count = max(count, arr[r][i] + (dp(r+1, i, arr)));
//         }
//     }
//     memo[r][c+1] = count;
//     return count;
// }
int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> arr;
    
    for(int i = 0; i < n; i++){
        vector<int> temp(3);
        for(int j = 0; j < 3; j++){
            cin >> temp[j];
        }
        arr.push_back(temp);
    }
    vector<vector<int>> dp(n, vector<int> (3, 0));
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];

    for(int i = 1; i < n; i++){
        for(int j = 0; j < 3;j++){
            for(int k = 0; k < 3; k++){
                if(j != k){
                    dp[i][j] = max(dp[i][j], arr[i][j] + dp[i-1][k]);
                }
            }
        }
    }
    cout << *max_element(dp[n-1].begin(), dp[n-1].end()) << endl;
}