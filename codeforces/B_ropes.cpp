#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define for(i,n) for(int i = 0; i < n; ++i)
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(i, n) cin >> arr[i];
    int left = 0;
    int right = accumulate(arr.begin(), arr.end(), 0);
    double maxCut = 0;
    while(left <= right){
        double mid = left + (right - left) / 2;
        double total = 0;
        for(i, n){
            total+=floor(arr[i]/mid);
        }
        if(total >= k){
            maxCut = max(maxCut, mid);
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }

    cout << maxCut << endl;
}