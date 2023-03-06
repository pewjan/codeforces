#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
// #include "../rin.h"
#define ll long long int

// int memo[1000000];
// ll dp(int total, int &x, vector<int> &arr){
//     if(total > x){
//         return INT_MAX;
//     }
//     if(total == x){
//         return 0;
//     }
//     if(memo[total] != -1){
//         return memo[total];
//     }

//     ll count = INT_MAX;
//     for(int i = 0; i < arr.size();i++){
//         if((total + arr[i]) > x){
//             break;
//         } 
//         count = min(count, 1 + dp(total+arr[i], x, arr));
//     }
//     memo[total] = count;
//     return count;


// }
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, target;
    cin >> n >> target;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<ll> dp(target+1, INT_MAX);
    dp[0] = 0;
    for(int i = 1; i <= target; i++){
        for(auto &x : arr){
            if((i - x) >= 0){

                dp[i] = min(dp[i], 1 + dp[i-x]);
            }
        }
    }
    cout << (dp[target] == INT_MAX ? -1 : dp[target]) << endl;


}