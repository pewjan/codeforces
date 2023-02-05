#include <bits/stdc++.h>
using namespace std;
// void __print(int x) {cerr << x;}
// void __print(long x) {cerr << x;}
// void __print(long long x) {cerr << x;}
// void __print(unsigned x) {cerr << x;}
// void __print(unsigned long x) {cerr << x;}
// void __print(unsigned long long x) {cerr << x;}
// void __print(float x) {cerr << x;}
// void __print(double x) {cerr << x;}
// void __print(long double x) {cerr << x;}
// void __print(char x) {cerr << '\'' << x << '\'';}
// void __print(const char *x) {cerr << '\"' << x << '\"';}
// void __print(const string &x) {cerr << '\"' << x << '\"';}
// void __print(bool x) {cerr << (x ? "true" : "false");}
 
// template<typename T, typename V>
// void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
// template<typename T>
// void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
// void _print() {cerr << "]\n";}
// template <typename T, typename... V>
// void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
// #ifndef ONLINE_JUDGE
// #define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
// #else
// #define debug(x...)
// #endif
 
 
int ROW;
int COL;
set<pair<int, int>> visited;
 
 
void dfs(int r, int c, vector<string> & buildings){
	if(r < 0 or c < 0 or r >= ROW or c >= COL or buildings[r][c] == '#' or visited.count({r,c})){
		return;
	}
	visited.insert({r,c});
	dfs(r+1, c, buildings);
	dfs(r-1, c, buildings);
	dfs(r, c+1, buildings);
	dfs(r, c-1, buildings);
}
int main(){
	int n, m;
	cin >> n >> m;
	vector<string> buildings(n);
	for(int i = 0; i < n; ++i){
		cin >> buildings[i];
	}
	ROW = n;
	COL = m;
	int ans = 0;
	for(int r = 0 ; r < n; ++r){
		for(int c = 0; c < m; ++c){
			if(buildings[r][c] == '.' && !visited.count({r,c})){
				ans++;
				dfs(r,c, buildings);
			}
		}
	}
	cout << ans << endl;
	
}