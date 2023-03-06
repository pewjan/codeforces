#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

#include "../rin.h"
#define ll long long int


int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    unordered_map<int, unordered_set<int>> conn;
    unordered_set<int> visited;
    unordered_map<int, int> find;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        conn[x].insert(y);
        conn[y].insert(x);
    }
    queue<int> q;
    q.push(1);
    int x = 0;
    while(q.size()){
        
        auto curr = q.front();
        q.pop();
        if(curr == n){
            vector<int> path{n};
            cout << "x" << " " << x << endl;
            int last = curr;
            while(find.count(last) && last != 1){
                cout << last << endl;
                path.push_back(find[last]);
                last = find[last];
            }
            debug(path);
            cout << endl;
            exit(0);
        }
        for(auto &x : conn[curr]){
            if(!visited.count(x)){
                q.push(x);
                if(x != 1 || !find.count(x)){
                    find[x] = curr;
                }
                visited.insert(x);
            }
        }
        x++;

    }
    cout << "IMPOSSIBLE" << endl;



}