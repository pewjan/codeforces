#include <bits/stdc++.h>
using namespace std;
// #include "../temp.h"
#define ll long long int


int main(){
    int n;
    cin >> n;
    unordered_map<int, int> m;
    ll ans = 0;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        m[x] = i;
    }
    int i = 1;
    while(i <= n){
        ans++;
        int nextNum = i+1;   
        int index = m[i];
        if(m[nextNum] > index){
            while(m[nextNum] > index){
                i = nextNum;
                index = m[nextNum];
                nextNum = i+1;
                
            }
            i++;
        }else{
            i++;
        }
    
    }
    cout << ans << endl;
}