#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main(){
    ll n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int left = 0;
    int longest = 0;
    unordered_map<int, int> m;
    for(int right = 0; right < n; right++){
        int num = arr[right];

        while(m[num] > 0){
            m[arr[left]]--;
            left++;
        }
        m[num]++;
        longest = max(longest, (right - left + 1));
    }
    cout << longest << endl;
}