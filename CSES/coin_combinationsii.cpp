#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
#include "../rin.h"


int memo[1000000];
ll dp(int total, int prev, int &target,  vector<ll> &arr){
    debug(total, prev);
    if(total > target){
        return 0;

    }
    if(total == target){
        return 1;
    }
    if(memo[total] != -1){
        return memo[total];
    }

    ll count = dp(total, prev, target, arr);
    for(int i = prev; i < arr.size();i++){
        if(arr[total] + arr[i] > target){
            break;
        }
        count = (count + dp(total+arr[i], i, target, arr)) % 1000000007;
    }
    memo[total] = count;
    return count;

}
int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, target;
    cin >> n >> target;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    memset(memo, -1, 1e6);
    sort(arr.begin(), arr.end());
    cout << dp(0, 0, target, arr) << endl;

}