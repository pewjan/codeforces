#include <bits/stdc++.h>
using namespace std;
// #include "../rin.h"


// 5 3
// 5 3 7 8 5
// 4 8 3
int main(){
    int n, m;
    cin >> n >> m;
    multiset<int> s;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        s.insert(x);
    }
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        if(s.size() == 0){
            cout << -1 << endl;
        }else{
            auto it = prev(s.upper_bound(x));
            if(it == s.end() || *it > x){
                cout <<  -1 << endl;
            }else{
                cout << *it << endl;
                s.erase(it);
            }

        }
    }
}