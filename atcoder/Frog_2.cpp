#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int

int main(){
    
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    dp[1] = abs(arr[1] - arr[0]);
    for(int i = 2; i < n; i++){
        for(int j = 1; j < k+1; j++){
            if((i-j) < 0){
                break;
            }
            dp[i] = min(dp[i], dp[i-j] + abs(arr[i] - arr[i-j]));
            
        }
    }
    cout << dp[n-1] << endl;

}