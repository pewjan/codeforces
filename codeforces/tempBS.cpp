#include <bits/stdc++.h>
using namespace std;
int left(int target, vector<int> & arr){
    int left = 0;
    int right = arr.size()-1;
    int closestLeft = INT_MAX;
    while (left <= right){
        int mid = left + (right - left) / 2;
        if (arr[mid] <= target){
            closestLeft = min(closestLeft, mid);
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return closestLeft;

 
 
}
int right(int target, vector<int> & arr){
    int left = 0;
    int right = arr.size()-1;
    int closestLeft = INT_MIN;
    while (left <= right){
        int mid = left + (right - left) / 2;
        if (arr[mid] >= target){
            closestLeft = max(closestLeft, mid);
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return closestLeft;

//1 3 4 10 10
}
int main(){
    int n, k;
    cin >> n;
    vector<int> arr(n);
    vector<int> ans;
    for(int i = 0 ; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());
    cin >> k;
    for(int i = 0; i < k; i++){
        int temp1;
        int temp2;
        cin >> temp1 >> temp2;
        int x = right(temp1, arr);
        int y = left(temp2, arr);
        ans.push_back((y-x+1));

    }
    for(int i = 0; i < ans.size();++i){
        cout << ans[i] << " ";
    }
    

}