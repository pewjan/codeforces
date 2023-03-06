#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
// #include "../temp.h"
#define ll long long int

unordered_set<int> visited;
unordered_map<int, unordered_set<int>> conn;
void dfs(int node){
    visited.insert(node);
    for(auto &nei : conn[node]){
        if(!visited.count(nei)){
            dfs(nei);
        }
    }
}
int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        conn[x].insert(y);
        conn[y].insert(x);
    }
    int ans = 0;
    vector<pair<int,int>> c;
    for(int i = 1; i <= n; i++){
        if(!visited.count(i)){
            if(visited.size()){
                ans++;
                c.push_back({i-1, i});
            }
            dfs(i);
        }
    }
    cout << ans << endl;
    for(auto &x: c){
        cout << x.first << " " << x.second << endl;
    }

}