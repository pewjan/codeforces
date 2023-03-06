#include <bits/stdc++.h>
using namespace std;
// #include "../rin.h"



int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    int total = 0;
    int maxSub = INT_MIN;
    for(int i = 0; i < n; i++){
        if(total < 0){
            total = 0;
        }
        total+=arr[i];
        maxSub = max(maxSub, total);
    }
    cout << maxSub << endl;
}