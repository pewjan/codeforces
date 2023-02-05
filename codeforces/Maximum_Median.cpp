#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    
    int left = 1;
    int right = n;
    int mostWorked = 0;
    while(left <= right){
        int mid = left + (right - left) / 2;
        int total = 0;
        for(int i = 1; i <= mid; ++i){
            if (total == 0){
                total = i * 5;
            }else{
                total+= i * 5;
            }
        }
        if ((240 - total ) >= k){
            mostWorked = max(mostWorked, mid);
            left = mid + 1;
        }else{
            right = mid - 1;
            
        }
    }
    cout << mostWorked << endl;
    
}