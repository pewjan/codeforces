#include <bits/stdc++.h>
using namespace std;
// #include "../rin.h"
#define MOD 1000000007
#define ll long long int

// unordered_map<int, int> memo;
// int dp(int t, int &n){
//     if(memo.count(t)){
//         return memo[t];
//     }
//     if(t > n){
//         return 0; 
//     }
//     if(t == n){
//         return 1;
//     }
//     int total = 0;
//     for(int i = 1; i < 7; i++){
//         if(t + i > n){
//             break;
//         }
//         total =  ((total + dp(i+t, n)) % MOD);
//     }
//     memo[t] = (total % MOD);
//     return memo[t];

// }
int main(){
    int n;
    cin >> n;
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j < 7; j++){
            if((i-j) < 0){
                break;
            } 
            dp[i] = (dp[i] + dp[i-j]) % MOD;
        }
    }
    cout << dp[n] << endl;

}