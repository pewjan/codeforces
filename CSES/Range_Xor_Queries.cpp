#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,q;
    cin >> n >> q;
    vector<ll> arr(n);
    vector<ll> prefixSum(n+1);
    ll total = 0;
    for(int i = 0; i < n; ++i) cin >> arr[i];
    for(int i = 0; i < n; ++i){
        total^=arr[i];
        prefixSum[i+1] = total;
    }

    for(int i = 0; i < q; ++i){
        ll x, y;    
        cin >> x >> y;
        cout << (prefixSum[y] ^ prefixSum[x-1]) << endl;
    }


}