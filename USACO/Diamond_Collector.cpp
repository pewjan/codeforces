#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, k;
    vector<int> arr;
    unordered_set<int> m;
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    cin >> n >> k;
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());
    int left = 0;
    int total = 0;
    for(int right = 1; right < n; ++right){
        if(arr[right] - arr[left] <= k){
            if (m.find(left) == m.end()){
                total++;
                m.insert(left);
            }
            total++;
            m.insert(right);
        }   
        while(arr[right] - arr[left] > k){
            left++;
        }

    }
    cout << total << endl;
}
