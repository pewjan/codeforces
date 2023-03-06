#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int



int main(){ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> dp(n, 0);
    dp[1] = abs(arr[0] - arr[1]);
    for(int i = 2; i < n; i++){
        dp[i] = min(dp[i-1] + abs(arr[i] - arr[i-1]), dp[i-2] + abs(arr[i] - arr[i-2]));
    }
    cout << dp[n-1] << endl;

}
