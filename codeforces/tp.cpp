#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007


int main(){
    int n, m;
    int ans = 0;
    cin >> n >> m;
    int temp;
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    while(n--){
        cin >> temp;
        m1[temp]++;
    }
    while(m--){
        cin >> temp;
        m2[temp]++;
    }
    for(auto& [key, value] : m1){
        if(m2.count(key)){
            ans+=(value * m2[key]);
        }
    }


    cout << ans << endl;

}