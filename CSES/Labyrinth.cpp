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

int main(){
	int n, m;
	freopen("test.in", "r", stdin);
	cin >> n >> m;
	vector<string> buildings(n);
	for(int i = 0; i < n; ++i){
		cin >> buildings[i];
	}
	ROW = n;
	COL = m;
	pair<int,int> start;
	pair<int, int> end;
	int ans = INT_MAX;
	for(int i = 0; i < ROW; ++i){
		for(int j = 0; j < COL; ++j){
			if(buildings[i][j] == 'A'){
				start = {i,j};
				break;
			}
		}
	}
	queue<tuple<int, int, int>> q;
	q.push(make_tuple(0, start.first, start.second));
	vector<vector<int>> directions = {{0,1},{1,0}, {0,-1}, {-1,0}};
	map<pair<int, int>, tuple<int, int, string>> conn;

	while(q.size()){
		// int count = q.size();
		int dst, x, y;
		tie(dst, x,y) = q.front();
		q.pop();
		if(buildings[x][y] == 'B'){
			ans = dst;
			end = {x,y};
			break;
		}
		if(visited.count({x, y})){
			continue;
		}
		visited.insert({x,y});
		for(auto &d : directions){
			int nr, nc;
			nr = x + d[0];
			nc = y + d[1];
			if (nr < 0 || nc < 0 || nr >= ROW || nc >= COL ||  visited.count({nr,nc}) || buildings[nr][nc] == '#'){
				continue;
			}
			string nw;
			if(d[0] == 0 && d[1] == 1){
				nw = "R";
			}else if(d[0] == 1 && d[1] == 0){
				nw = "D";
			}else if(d[0] == -1 && d[1] == 0){
				nw = "U";
			}else{
				nw = "L";
			}
			q.push(make_tuple(dst+1, nr,nc));
			conn[{nr,nc}] = make_tuple(x, y, nw);
			
		}
	}
	if(ans == INT_MAX){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
		cout << ans << endl;
		vector<string> path;
		while(conn.count(end)){
			path.push_back(get<2>(conn[end]));
			end = {get<0>(conn[end]), get<1>(conn[end])};
		}
		string final[path.size()];
		for(int i =0 ; i < path.size();++i){
			final[i] = path[i];
		}
		cout << final << endl;

	}

}