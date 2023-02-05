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
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        bool sideBySide = false;
        bool cornerRight = false;
        bool random = false;
        int index;
        int total = 0;

        for(int i = 0; i < n ;i++){
            int x;
            cin >> x;
            arr.push_back(x);
            if(!sideBySide && i > 0 && arr[i] == -1 && arr[i] == arr[i-1]){
                sideBySide = true;
                index = i-1;
            }if(!sideBySide && i < n - 1 && arr[i] == -1){
                index = i;
                random = true;
            }
        }
        if(sideBySide){
            arr[index] = 1;
            arr[index+1] = 1;
        }else if(arr[arr.size()-1] == -1){
            arr[arr.size()-2] = -1;
            arr[arr.size()-1] = 1;
        }
        else if(random){
            arr[index] = 1;
            arr[index+1] = -1;
        }else{
            arr[0] = -1;
            arr[1] = -1;
        }

        for(int i = 0; i < n; ++i){
            total+=arr[i];
        }
        cout << total << endl;
        
    }
    


}