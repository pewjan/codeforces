#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int


int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, target;
    cin >> n >> target;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<ll> dp(target+1, 0);
    dp[0] = 1;
    for(int i = 1; i <= target; i++){
        for(auto &x : arr){
            if(i-x >= 0){
                dp[i] = (dp[i] + dp[i-x]) % 1000000007;
            }
        }
    }
    cout << dp[target] << endl;

}