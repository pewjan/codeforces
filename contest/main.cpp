#include <bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> ppl(n);
    vector<int> apt(m);
    for(int i = 0; i < n; ++i) cin >>ppl[i];
    for(int i = 0; i < m; ++i) cin >>apt[i];
    sort(ppl.begin(), ppl.end());
    sort(apt.begin(), apt.end());
    int p1 = 0;
    int p2 = 0;
    int ans = 0;
    while(p1 < ppl.size()){
        if(ppl[p1] > apt[p2] - k && ppl[p1] < apt[p2] + k ){
            ans++;
            p1++;
            p2++;
        }
        else if(ppl[p1] > apt[p2] + k){
            p2++;
        }else{
            p1++;
        }
    }


}