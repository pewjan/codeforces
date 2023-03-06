#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include "../rin.h"


int main(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    debug(arr);
}