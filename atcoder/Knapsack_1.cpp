#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
// #include "../rin.h"
#define ll long long int

// ll memo[100][1000000];

// ll dp(int i, ll w, ll &total, vector<int> &weight, vector<int> &value){
//     if(i >= value.size()){
//         return 0;
//     }
//     if(memo[i][w] != -1){
//         return memo[i][w];
//     }
//     ll d1 = dp(i+1, w, total, weight, value);
//     ll d2 = INT_MIN;
//     if(w+weight[i] <= total){
//         d2 = value[i] + dp(i+1, w+weight[i], total, weight, value);
//     }
//     memo[i][w] = max(d1, d2);
//     return memo[i][w];

// }
int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, w;
    cin >> n >> w;
    vector<int> value(n);
    vector<int> weight(n);
    for(int i = 0; i < n; i++){
        cin >> weight[i];
        cin >> value[i];
    }
    

}   