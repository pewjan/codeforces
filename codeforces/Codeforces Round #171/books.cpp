#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> arr;
    for(int i = 0; i < n; ++i){
        int temp;
        cin >> temp;
        arr.push_back(temp);

    }
    int left = 0;
     int total = 0;
     int sum = 0;
    for(int right = 0; right < n; ++right){
        total+=arr[right];
        while (total > x){
            total-=arr[left];
            left++;
        }
        if (total <= x){
            sum = max(sum, right - left + 1);
        }
            
    }
    cout << (sum) << endl;

    
}