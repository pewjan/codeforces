#include <bits/stdc++.h>
using namespace std;
// #include "../rin.h"



int main(){
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    int ans = 0;
    for(int i = 0 ; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int p1 = 0;
    int p2 = n-1;
    while(p1<=p2){
        int num1 = arr[p1];
        int num2 = arr[p2];

        if(p1 != p2 && num1+num2 > x){
            ans++;
            p2--;
        }
        else if(p1 != p2 && num1+num2 <= x){
            ans++;
            p1++;
            p2--;
        }
        else{
            ans++;
            p1++;
        }
    }
    cout << ans << endl;

    
}