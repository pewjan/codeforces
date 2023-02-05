#include <bits/stdc++.h>
using namespace std;
// #include "../rin.h"

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> people(n);
    vector<int> apartment(m);
    for(int i =  0; i < n; i++) cin >> people[i];
    for(int i =  0; i < m; i++) cin >> apartment[i];
    sort(people.begin(), people.end());
    sort(apartment.begin(), apartment.end());
    int ans = 0;
    int p1 = 0;
    int p2 = 0;
    while(p1 < n && p2 < m){
        
        int lB, rB;
        lB = apartment[p2] - k;
        rB = apartment[p2] + k;
        int curr = people[p1];

        if(curr >= lB && curr <= rB){
            ans++;
            p1++;
            p2++;
        }
        else if(curr > rB){
            p2++;
        }else{
            p1++;
        }
    }
    cout << ans << endl;

}