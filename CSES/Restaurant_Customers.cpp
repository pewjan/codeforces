#include <bits/stdc++.h>
using namespace std;
// #include "../rin.h"

int main(){
    int n;
    map<int, int> m;
    cin >> n;
    for(int i = 0 ; i < n; ++i){
        int x,y;
        cin >> x >> y;
        m[x]++;
        m[y]--;
    }
    int ans = 0;
    int total = 0;
    for(auto &[key, value] : m){
        total+=value;
        ans = max(ans, total);
    }
    cout << ans << endl;
}