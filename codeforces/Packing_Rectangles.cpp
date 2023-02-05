#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool solve(ll num, ll w, ll h, ll n){
    
    ll calc1 = num/w;
    ll calc2 = num/h;
    if ((calc1 * calc2) >= n){
        return true;
    }
    return false;

}
int main(){
    ll w, h, n;
    cin >> w >> h >> n;
    ll left = 1;
    ll right = (w * h) * n;
    ll smallest = INT_MAX;
    while(left <=  right){
        ll mid = left + (right - left) / 2;

        if(solve(mid, w, h, n)){
            smallest = min(smallest, mid);
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    cout << smallest << endl;


}