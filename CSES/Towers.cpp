#include <bits/stdc++.h>
using namespace std;
// #include "../rin.h"
#define ll long long int


int main(){
    int n; 
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<int> t;
    int ans = 0;
    for(int i = 0; i < n; ++i){
        
        if(t.size()){
            auto it = upper_bound(t.begin(), t.end(), arr[i]);
            if(it == t.end()){
                t.push_back(arr[i]);
            }else{
                *it = arr[i];
            }
        }else{
            t.push_back(arr[i]);
        }
    }
    cout << t.size() << endl;
}